// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vrsqrt.yaml
//   Generator: tools/generate-vunary-test.py


#include <vector>

#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>
#include <xnnpack/vunary.h>

#include "vunary-microkernel-tester.h"


TEST(F32_VRSQRT__SCALAR_RSQRT_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U1, batch_gt_1) {
  for (size_t batch_size = 1 + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u1);
  }
}


TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, batch_gt_2) {
  for (size_t batch_size = 2 + 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u2);
  }
}


TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, batch_gt_4) {
  for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u4);
  }
}


TEST(F32_VRSQRT__SCALAR_RSQRT_U8, batch_eq_8) {
  VUnaryMicrokernelTester()
    .batch_size(8)
    .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u8);
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U8, batch_div_8) {
  for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u8);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U8, batch_lt_8) {
  for (size_t batch_size = 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u8);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U8, batch_gt_8) {
  for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u8);
  }
}

TEST(F32_VRSQRT__SCALAR_RSQRT_U8, inplace) {
  for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vrsqrt_ukernel__scalar_rsqrt_u8);
  }
}


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U4, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 24; batch_size < 120; batch_size += 12) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 12; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 12 + 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U12, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 60; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u16, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U20, batch_eq_20) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(20)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u20, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U20, batch_div_20) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 40; batch_size < 200; batch_size += 20) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u20, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U20, batch_lt_20) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 20; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u20, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U20, batch_gt_20) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 20 + 1; batch_size < 40; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u20, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U20, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 100; batch_size += 19) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u20, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U24, batch_eq_24) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u24, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U24, batch_div_24) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u24, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U24, batch_lt_24) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u24, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U24, batch_gt_24) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 24 + 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u24, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U24, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u24, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U28, batch_eq_28) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(28)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u28, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U28, batch_div_28) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 56; batch_size < 280; batch_size += 28) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u28, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U28, batch_lt_28) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 28; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u28, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U28, batch_gt_28) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 28 + 1; batch_size < 56; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u28, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U28, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 140; batch_size += 27) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u28, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__SSE_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u32, xnn_init_f32_rsqrt_sse_params);
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u32, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u32, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u32, xnn_init_f32_rsqrt_sse_params);
    }
  }

  TEST(F32_VRSQRT__SSE_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__sse_rsqrt_u32, xnn_init_f32_rsqrt_sse_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U24, batch_eq_24) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U24, batch_div_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U24, batch_lt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U24, batch_gt_24) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 24 + 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U24, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u24, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U40, batch_eq_40) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u40, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U40, batch_div_40) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 80; batch_size < 400; batch_size += 40) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u40, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U40, batch_lt_40) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 40; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u40, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U40, batch_gt_40) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 40 + 1; batch_size < 80; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u40, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U40, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 200; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u40, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u48, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u48, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u48, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u48, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U48, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u48, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U56, batch_eq_56) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u56, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U56, batch_div_56) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 112; batch_size < 560; batch_size += 56) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u56, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U56, batch_lt_56) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 56; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u56, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U56, batch_gt_56) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 56 + 1; batch_size < 112; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u56, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U56, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 280; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u56, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX_RSQRT_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u64, xnn_init_f32_rsqrt_avx_params);
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u64, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u64, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u64, xnn_init_f32_rsqrt_avx_params);
    }
  }

  TEST(F32_VRSQRT__AVX_RSQRT_U64, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx_rsqrt_u64, xnn_init_f32_rsqrt_avx_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U24, batch_eq_24) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(24)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u24, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U24, batch_div_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 48; batch_size < 240; batch_size += 24) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u24, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U24, batch_lt_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u24, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U24, batch_gt_24) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 24 + 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u24, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U24, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 120; batch_size += 23) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u24, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U40, batch_eq_40) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(40)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u40, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U40, batch_div_40) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 80; batch_size < 400; batch_size += 40) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u40, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U40, batch_lt_40) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 40; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u40, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U40, batch_gt_40) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 40 + 1; batch_size < 80; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u40, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U40, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 200; batch_size += 39) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u40, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U48, batch_eq_48) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u48, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U48, batch_div_48) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u48, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U48, batch_lt_48) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u48, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U48, batch_gt_48) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u48, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U48, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u48, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U56, batch_eq_56) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(56)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u56, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U56, batch_div_56) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 112; batch_size < 560; batch_size += 56) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u56, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U56, batch_lt_56) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 56; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u56, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U56, batch_gt_56) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 56 + 1; batch_size < 112; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u56, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U56, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 280; batch_size += 55) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u56, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__FMA3_RSQRT_U64, batch_eq_64) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u64, xnn_init_f32_rsqrt_fma3_params);
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U64, batch_div_64) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u64, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U64, batch_lt_64) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u64, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U64, batch_gt_64) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u64, xnn_init_f32_rsqrt_fma3_params);
    }
  }

  TEST(F32_VRSQRT__FMA3_RSQRT_U64, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__fma3_rsqrt_u64, xnn_init_f32_rsqrt_fma3_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_eq_64) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(64)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_div_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 128; batch_size < 640; batch_size += 64) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_lt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, batch_gt_64) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64 + 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U64, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 320; batch_size += 63) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u64, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U80, batch_eq_80) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(80)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u80, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U80, batch_div_80) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 160; batch_size < 800; batch_size += 80) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u80, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U80, batch_lt_80) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 80; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u80, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U80, batch_gt_80) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 80 + 1; batch_size < 160; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u80, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U80, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 400; batch_size += 79) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u80, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U96, batch_eq_96) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(96)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u96, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U96, batch_div_96) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 192; batch_size < 960; batch_size += 96) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u96, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U96, batch_lt_96) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u96, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U96, batch_gt_96) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 96 + 1; batch_size < 192; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u96, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U96, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 480; batch_size += 95) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u96, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U112, batch_eq_112) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(112)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u112, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U112, batch_div_112) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 224; batch_size < 1120; batch_size += 112) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u112, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U112, batch_lt_112) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 112; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u112, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U112, batch_gt_112) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 112 + 1; batch_size < 224; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u112, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U112, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 560; batch_size += 111) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u112, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VRSQRT__AVX512F_RSQRT_U128, batch_eq_128) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(128)
      .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u128, xnn_init_f32_rsqrt_avx512_params);
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U128, batch_div_128) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 256; batch_size < 1280; batch_size += 128) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u128, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U128, batch_lt_128) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 128; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u128, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U128, batch_gt_128) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 128 + 1; batch_size < 256; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u128, xnn_init_f32_rsqrt_avx512_params);
    }
  }

  TEST(F32_VRSQRT__AVX512F_RSQRT_U128, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 640; batch_size += 127) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vrsqrt_ukernel__avx512f_rsqrt_u128, xnn_init_f32_rsqrt_avx512_params);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64
