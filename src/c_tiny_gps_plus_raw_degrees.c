/*
 * c_tiny_gps_plus_raw_degrees.c
 *
 * Based on TinyGPS++ by Mikal Hart.
 *
 * Copyright (C) 2008-2013 Mikal Hart
 * Copyright (C) 2019, Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * This file is part of CTinyGPS++.
 * 
 * CTinyGPS++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * CTinyGPS++ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with CTinyGPS++. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief Raw degrees struct implementation.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.1.0
 * 
 * \date 03/04/2019
 * 
 * \addtogroup c_tiny_gps_plus_raw_degrees
 * \{
 */

#include "c_tiny_gps_plus_raw_degrees.h"

void c_tiny_gps_plus_raw_degrees_init(c_tiny_gps_plus_raw_degrees_t *rd)
{
    rd->deg = 0;
    rd->billionths = 0;
    rd->negative = false;
}

c_tiny_gps_plus_raw_degrees_t c_tiny_gps_plus_raw_degrees_gen()
{
    c_tiny_gps_plus_raw_degrees_t rd;

    c_tiny_gps_plus_raw_degrees_init(&rd);

    return rd;
}

//! \} End of c_tiny_gps_plus_raw_degrees group
