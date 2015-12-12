#ifndef _WEAPON_H
#define _WEAPON_H
#include "Item.h"
class Weapon :
    public Item
{
public:
    Weapon(const string& Name, const int& durability, const int& AttackDmg );
    virtual ~Weapon();
    virtual const int getAttackDmg();
    virtual const int getDurability();
    virtual void receiveDamage(const int& Damage);
private:
    const int kAttackDmg;
};

#endif