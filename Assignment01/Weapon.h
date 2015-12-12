#pragma once
#include "Item.h"
class Weapon :
    public Item
{
public:
    Weapon(const string& Name, const int& durability, const int& AttackDmg );
    virtual ~Weapon();
    const int getAttackDmg();
    virtual void receiveDamage(const int& Damage);
private:
    const int kAttackDmg;
};

