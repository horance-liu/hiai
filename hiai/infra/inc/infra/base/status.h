/*
 * status.h
 *
 *  Created on: Aug 4, 2021
 *      Author: horance
 */

#ifndef H7F80DAD3_CAEF_46F3_90F5_03D8515372AC
#define H7F80DAD3_CAEF_46F3_90F5_03D8515372AC

#include <stdint.h>

namespace hiai {

using Status = uint32_t;

constexpr Status HIAI_OK = 0;
constexpr Status HIAI_FAIL = 1;

} // namespace hiai

#endif /* H7F80DAD3_CAEF_46F3_90F5_03D8515372AC */
