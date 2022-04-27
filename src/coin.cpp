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

#include "coin.h"


// GETTERS & SETTERS
uint32_t Currency::CCoin::GetAmount() { return amount; }
wallet_address_t Currency::CCoin::GetOwner() { return owner };

void Currency::CCoin::SetNewOwner(const wallet_address_t _new_owner) 
{
	this.SetNewOwner(_new_owner);
}

void Currency::CCoin::DeleteCoins() 
{
	delete *this;
}

void Currency::CCoin::CheckValidation() 
{
	
}

Currency::CCoin::operator+(const Currency::CCoin &_to_add)
{
    Currency::CCoin res;
    res.amount += _to_add.GetAmount();
	return res;
}

Currency::Coin::operator-(const Currency::CCoin &_to_sub)
{
	Currency::CCoin res;
	res.amount -= _to_sub.GetAmount();
	return res;
}

std::unique_ptr<Currency::CCoin> Currency::AllocateCoin()
{
	std::unique_ptr<Currency::CCoin> allocated_coin(new Currency::CCoin());
	return allocated_coin;
}

virtual Currency::CCoin(uint32_t _amount, wallet_address_t _owner)
{
	this->amount = _amount;
	this->owner = _owner;
}

// PREFIX INCREMENT
Currency::CCoin::operator++() { return *this; }
Currency::CCoin::operator--() { return *this; }

// POSTFIX INCREMENT
Currency::CCoin::operator++(int32_t _to_add)
{
	Currency::CCoin bef_inc = *this;
	operator++();
	return bef_inc;
}

Currency::CCoin::operator--(int32_t _to_sub)
{
	Currency::CCoin bef_inc = *this;
	operator--();
	return bef_inc;
}


