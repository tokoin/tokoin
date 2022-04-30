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
#include <iostream>


// GETTERS & SETTERS
uint32_t Currency::CCoin::GetAmount() { return m_Amount; }
Currency::wallet_address_t Currency::CCoin::GetOwner() { return m_Owner; };

void Currency::CCoin::SetNewOwner(const wallet_address_t _new_owner) 
{
	this->SetNewOwner(_new_owner);
}

void Currency::CCoin::DeleteCoins() 
{
	delete this;
}

void Currency::CCoin::CheckValidation() 
{
	
}

static std::unique_ptr<Currency::CCoin> Currency::AllocateCoin(const wallet_address_t _owner, const uint32_t _amount)
{
	std::unique_ptr<Currency::CCoin> allocated_coin(new Currency::CCoin(_owner, _amount));
	return allocated_coin;
}

Currency::CCoin(uint32_t _amount, const Currency::wallet_address_t _owner);
{
	this->m_Amount = _amount;
	this->m_Owner = _owner;
}
