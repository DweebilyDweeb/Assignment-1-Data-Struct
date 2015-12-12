#ifndef _OUTFIT_H
#define _OUTFIT_H
#include "Item.h"
class Outfit :
    public Item
{
public:
    Outfit(const string& Name, const int& durability, const int& SPECIAL);
    virtual ~Outfit();
    const int getSPECIAL();
    virtual const int getDurability();
    virtual void receiveDamage(const int& Damage);
private:
    const int kSPECIAL;
};

#endif