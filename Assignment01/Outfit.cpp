#include "Outfit.h"


Outfit::Outfit(const string& Name, const int& durability, const int& SPECIAL) :Item(Name, durability), kSPECIAL(SPECIAL)
{
}


Outfit::~Outfit()
{
}

const int Outfit::getSPECIAL()
{
    return kSPECIAL;

}

const int Outfit::getDurability()
{
    return durability_;
    
}

void Outfit::receiveDamage(const int& Damage)
{
    durability_ -= Damage;

}