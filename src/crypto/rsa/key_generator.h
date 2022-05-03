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

#ifndef __KEY_GENERATOR_H__
#define __KEY_GENERATOR_H__

#include <boost/multiprecision/cpp_int.hpp>
#include <string>
#include <stdexcept>
#include "ctime"

namespace RSA
{
    class key_generator
    {
    private:
        boost::multiprecision::uint1024_t public_key_1, public_key_2, private_key; 
    public:
        key_generator();
        key_generator(unsigned size, bool fast = false);
        boost::multiprecision::uint1024_t get_public_key_1();
        boost::multiprecision::uint1024_t get_public_key_2();
        boost::multiprecision::uint1024_t get_private_key();
        ~key_generator(){}
    };    

} // namespace RSA


#endif // __KEY_GENERATOR_H__rsa
