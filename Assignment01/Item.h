#ifndef _ITEM_H
#define _ITEM_H
#include "GameObject.h"
#include <string>

class Item :
    public GameObject
{
public:
    Item(const string& kName, const int& durability);
    virtual ~Item();
    virtual void receiveDamage(const int& Damage) = 0;
    virtual const int getDurability();

private:

protected:
    int durability_;
};

#endif