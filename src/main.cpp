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

#include <iostream>
#include "coin.h"

void TestCoin()
{
	std::unique_ptr<Currency::CCoin> test_coin(new Currency::CCoin(0x09318F82A, 20));

	std::cout << "======= TEST COIN STATS =======" << "\n";
	std::cout << "Amount: " << test_coin->GetAmount() << "\n";
	std::cout << "Owner: " << test_coin->GetOwner() << "\n";
	std::cout << "===============================" << "\n";
}

int main(int argc, char* argv[])
{
	TestCoin();
    return 0;
}
