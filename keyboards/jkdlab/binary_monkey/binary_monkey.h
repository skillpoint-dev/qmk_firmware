/*
 * Copyright 2021 JKDLAB. <jkdlab.co@gmail.com>
 * Copyright 2021 Jaehee <ljh34210329@gmail.com>
 * 
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see https://www.gnu.org/licenses/.
 */
 
#pragma once

#include "quantum.h"

#define LAYOUT( \
    K00, K01, \
       K10 \
) { \
    { K10, K00, K01 } \
}
