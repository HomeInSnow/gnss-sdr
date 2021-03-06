/* Copyright (C) 2010-2019 (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software-defined Global Navigation Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_VOLK_GNSSSDR_TYPEDEFS
#define INCLUDED_VOLK_GNSSSDR_TYPEDEFS

#include <volk_gnsssdr/volk_gnsssdr_complex.h>
#include <inttypes.h>

// clang-format off
%for kern in kernels:
typedef void (*${kern.pname})(${kern.arglist_types});
%endfor
// clang-format on

#endif /*INCLUDED_VOLK_GNSSSDR_TYPEDEFS*/
