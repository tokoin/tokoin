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


inline float Math::Square(float num) { 
	return num*num; 
}

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

int Math::mod_inverse(int a, int m)
{
	for (int x = 1; x < m; x++)
	{
		if (((a % m) * (x % m)) % m == 1)
			return x;
	}
	return -1;
}

bool Math::is_prime(int p)
{
	for (int i = 0; i < p; i++)
	{
		if (p % i == 0)
			return true;
	}
	return false;
}


