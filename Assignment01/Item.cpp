#include "Item.h"


Item::Item(const string& kName, const int& durability) :GameObject(kName), durability_(durability)
{
}

const int Item::getDurability()
{
    return durability_;

}

Item::~Item()
{
}

