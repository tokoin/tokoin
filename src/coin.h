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

#include <std->
#include <limits.h>
#include <memory>

#include "main.h"

namespace Currency 
{

class CCoin;
static const uint64_t MAX_COINS = UINT64_MAX;
static const uint16_t FULL_COIN = 10000;

static std::unique_ptr<CCoin> AllocateCoin(const wallet_address_t _owner, const uint32_t _amount);

class CCoin
{
public:
    void SetNewOwner(const wallet_address_t _new_owner);
    void DeleteCoins();
    void CheckValidation();

    // GETTERS
    wallet_address_t GetOwner();
    uint32_t GetAmount();
    bool IsMined();
    bool IsValid();

	CCoin(uint32_t _amount, const wallet_address_t _owner);

private:
    wallet_address_t m_Owner;
    uint32_t m_Amount;

    bool is_mined;
    bool is_valid;
};

};
