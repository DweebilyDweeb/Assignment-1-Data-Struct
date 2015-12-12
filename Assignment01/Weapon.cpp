#include "Weapon.h"


Weapon::Weapon(const string& Name, const int& durability, const int& AttackDmg) :Item(Name, durability), kAttackDmg(AttackDmg)
{
}


Weapon::~Weapon()
{
}

const int Weapon::getAttackDmg()
{
    return kAttackDmg;
    
}

void Weapon::receiveDamage(const int& Damage)
{
    durability_ -= Damage / 2;


}