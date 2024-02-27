// Auto-generated file. Do not edit!
//   Template: src/f32-vrsqrt/avx-rsqrt.c.in
//   Generator: tools/xngen
//
// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>
#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>
#include <xmmintrin.h>
#include <xnnpack/common.h>
#include <xnnpack/microparams.h>
#include <xnnpack/vunary.h>


// In the following, we do a single Newton-Raphson step on the equation
// $x^{-2} - a$, which expands to:
//
//  $$x_{k+1} = 0.5 * x_k * (3.0 - a * x_k^2)$$
//
// So we do the following steps:
//
//  1. t0 = x_k
//  2. t1 = t0 * t0   (x_k^2)
//  3. t2 = a * t1    (a * x_k^2)
//  4. t3 = 3.0 - t2  (3.0 - a * x_k^2)
//  5. t4 = 0.5 * t0  (0.5 * x_k)
//  6. y  = t3 * t4   (0.5 * x_k * (3.0 - a * x_k^2))
//
// Where $x_k$ is the original 12-bit approximation and `y` contains the final
// 24-bit approximation $x_{k+1}$.

void xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24(
    size_t batch, const float* input, float* output,
    const union xnn_f32_rsqrt_params params[restrict XNN_MIN_ELEMENTS(1)])
    XNN_OOB_READS {
  assert(batch != 0);
  assert(batch % sizeof(float) == 0);
  assert(input != NULL);
  assert(output != NULL);

  // Constants for the Newton-Raphson iteration.
  const __m256 kThree = _mm256_load_ps(params->avx.three);
  const __m256 kHalf = _mm256_load_ps(params->avx.half);

  for (; batch >= 24 * sizeof(float); batch -= 24 * sizeof(float)) {
    const __m256 va0 = _mm256_loadu_ps(input);
    const __m256 va1 = _mm256_loadu_ps(input + 8);
    const __m256 va2 = _mm256_loadu_ps(input + 16);
    input += 24;

    // Generate the initial 12-bit approximation.
    const __m256 vt0_0 = _mm256_rsqrt_ps(va0);
    const __m256 vt0_1 = _mm256_rsqrt_ps(va1);
    const __m256 vt0_2 = _mm256_rsqrt_ps(va2);

    // Do a single Newton-Raphson step as described above.
    const __m256 vt1_0 = _mm256_mul_ps(vt0_0, vt0_0);
    const __m256 vt1_1 = _mm256_mul_ps(vt0_1, vt0_1);
    const __m256 vt1_2 = _mm256_mul_ps(vt0_2, vt0_2);
    const __m256 vt2_0 = _mm256_mul_ps(va0, vt1_0);
    const __m256 vt2_1 = _mm256_mul_ps(va1, vt1_1);
    const __m256 vt2_2 = _mm256_mul_ps(va2, vt1_2);
    const __m256 vt3_0 = _mm256_sub_ps(kThree, vt2_0);
    const __m256 vt3_1 = _mm256_sub_ps(kThree, vt2_1);
    const __m256 vt3_2 = _mm256_sub_ps(kThree, vt2_2);
    const __m256 vt4_0 = _mm256_mul_ps(kHalf, vt0_0);
    const __m256 vt4_1 = _mm256_mul_ps(kHalf, vt0_1);
    const __m256 vt4_2 = _mm256_mul_ps(kHalf, vt0_2);
    const __m256 vy0 = _mm256_mul_ps(vt3_0, vt4_0);
    const __m256 vy1 = _mm256_mul_ps(vt3_1, vt4_1);
    const __m256 vy2 = _mm256_mul_ps(vt3_2, vt4_2);

    // Store the results.
    _mm256_storeu_ps(output, vy0);
    _mm256_storeu_ps(output + 8, vy1);
    _mm256_storeu_ps(output + 16, vy2);
    output += 24;
  }
  for (; batch >= 8 * sizeof(float); batch -= 8 * sizeof(float)) {
    const __m256 va = _mm256_loadu_ps(input);
    input += 8;

    // Generate the initial 12-bit approximation.
    const __m256 vt0 = _mm256_rsqrt_ps(va);

    // Do a single Newton-Raphson step as described above.
    const __m256 vt1 = _mm256_mul_ps(vt0, vt0);
    const __m256 vt2 = _mm256_mul_ps(va, vt1);
    const __m256 vt3 = _mm256_sub_ps(kThree, vt2);
    const __m256 vt4 = _mm256_mul_ps(kHalf, vt0);
    const __m256 vy = _mm256_mul_ps(vt3, vt4);

    _mm256_storeu_ps(output, vy);
    output += 8;
  }
  if XNN_UNLIKELY(batch != 0) {
    assert(batch >= 1 * sizeof(float));
    assert(batch <= 7 * sizeof(float));
    const __m256i vmask = _mm256_loadu_si256(
        (const __m256i*)((uintptr_t)&params->avx.mask_table[7] - batch));

    const __m256 va = _mm256_maskload_ps(input, vmask);

    // Generate the initial 12-bit approximation.
    const __m256 vt0 = _mm256_rsqrt_ps(va);

    // Do a single Newton-Raphson step as described above.
    const __m256 vt1 = _mm256_mul_ps(vt0, vt0);
    const __m256 vt2 = _mm256_mul_ps(va, vt1);
    const __m256 vt3 = _mm256_sub_ps(kThree, vt2);
    const __m256 vt4 = _mm256_mul_ps(kHalf, vt0);
    __m256 vy = _mm256_mul_ps(vt3, vt4);

    __m128 vy_lo = _mm256_castps256_ps128(vy);
    if (batch & (4 * sizeof(float))) {
      _mm_storeu_ps(output, vy_lo);
      vy_lo = _mm256_extractf128_ps(vy, 1);
      output += 4;
    }
    if (batch & (2 * sizeof(float))) {
      _mm_storel_pi((__m64*) output, vy_lo);
      vy_lo = _mm_movehl_ps(vy_lo, vy_lo);
      output += 2;
    }
    if (batch & (1 * sizeof(float))) {
      _mm_store_ss(output, vy_lo);
    }
  }
}
