// SPDX-License-Identifier: MIT
/*
 * Copyright (C) 2022  Leonard Steinhoff. All rights reserved.
 * Licensed under MIT
 *
 *
 * You should find a copy of the license in 'LICENSE', if you don't
 * you can get it on: 
 *
 * <https://www.opensource.org/licenses/mit>
 *
*/

#include "math_lib.h"

inline float Math::Square(float num) { return num*num; }

int Math::gcd(int a, int b)
{
    while (a!=b)
    {
        if (a<b)
            a = a-b;
        else
            b = b-a;
    }
    return a;
}

int Math::lcm(int a, int b)
{
    int curr_lcm = 0;
    if (a>b)
        curr_lcm = a;
    else
        curr_lcm = b;

    while (1)
    {
        if (curr_lcm % a == 0 && curr_lcm % b == 0)
        {
            return curr_lcm;
        }
        curr_lcm += 1;
    }
}
