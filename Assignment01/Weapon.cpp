#include "Weapon.h"


Weapon::Weapon(const string& Name, const int& durability, const int& AttackDmg) :Item(Name, durability), kAttackDmg(AttackDmg)
{
}


Weapon::~Weapon()
{
}
