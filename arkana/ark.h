/// @file
/// @brief	arkana::ark
/// @author Copyright(c) 2021 ttsuki
/// 
/// This software is released under the MIT License.
/// https://opensource.org/licenses/MIT

#pragma once

#include "./ark/types.h"
#include "./ark/lutgen.h"
#include "./ark/macros.h"
#include "./ark/bitmanip.h"
#include "./ark/memory.h"
#include "./ark/cpuid.h"
#include "./ark/hexilit.h"
#include "./ark/uint128.h"
#include "./ark/base64.h"

#ifdef __AVX2__
#include "./ark/xmm.h"
#endif
