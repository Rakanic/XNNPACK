# Copyright 2022 Google LLC
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree.
#
# Description: microkernel filename lists for avx256vnni
#
# Auto-generated file. Do not edit!
#   Generator: tools/update-microkernels.py


SET(PROD_AVX256VNNI_MICROKERNEL_SRCS
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-8x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-8x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-8x8c8-minmax-avx256vnni.c
  src/qs8-packw/gen/qs8-packw-x8c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-packw/gen/qs8-packw-x16c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-qu8-packw/gen/qs8-qu8-packw-x16c8-gemm-goi-avx256vnni.c)

SET(NON_PROD_AVX256VNNI_MICROKERNEL_SRCS
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc4w-gemm/gen/qd8-f16-qc4w-gemm-14x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-gemm/gen/qd8-f16-qc8w-gemm-14x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f16-qc8w-igemm/gen/qd8-f16-qc8w-igemm-14x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-8x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-14x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-8x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-14x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-1x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-1x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-5x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-5x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-7x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-7x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-8x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-8x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-9x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-9x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-10x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-10x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-12x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-12x8c8-minmax-avx256vnni.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-14x8c8-minmax-avx256vnni-prfm.c
  src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-14x8c8-minmax-avx256vnni.c
  src/qs8-packw/gen/qs8-packw-x8c8-gemm-goi-avx256vnni.c
  src/qs8-packw/gen/qs8-packw-x16c8-gemm-goi-avx256vnni.c
  src/qs8-qc4w-packw/gen/qs8-qc4w-packw-x8c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-qc4w-packw/gen/qs8-qc4w-packw-x8c8-gemm-goi-avx256vnni.c
  src/qs8-qc4w-packw/gen/qs8-qc4w-packw-x16c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-qc4w-packw/gen/qs8-qc4w-packw-x16c8-gemm-goi-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-5x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-5x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-7x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-7x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-8x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-8x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-9x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-9x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-10x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-10x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-12x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-12x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-14x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-14x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-5x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-5x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-7x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-7x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-8x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-8x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-9x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-9x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-10x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-10x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-12x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-12x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-14x8c8-minmax-fp32-avx256vnni-prfm.c
  src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-14x8c8-minmax-fp32-avx256vnni.c
  src/qs8-qu8-packw/gen/qs8-qu8-packw-x8c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-qu8-packw/gen/qs8-qu8-packw-x8c8-gemm-goi-avx256vnni.c
  src/qs8-qu8-packw/gen/qs8-qu8-packw-x16c8-gemm-goi-avx256vnni-prfm.c
  src/qs8-rsum/gen/qs8-rsum-avx256vnni-u32.c
  src/qs8-rsum/gen/qs8-rsum-avx256vnni-u64-acc2.c
  src/qs8-rsum/gen/qs8-rsum-avx256vnni-u128-acc2.c
  src/qs8-rsum/gen/qs8-rsum-avx256vnni-u128-acc4.c)

SET(ALL_AVX256VNNI_MICROKERNEL_SRCS ${PROD_AVX256VNNI_MICROKERNEL_SRCS} + ${NON_PROD_AVX256VNNI_MICROKERNEL_SRCS})
