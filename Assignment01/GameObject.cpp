#include "GameObject.h"

int GameObject::count_ = 0;

GameObject::GameObject(const string& Name) : kName(Name)
{
}

string GameObject::getName()
{
    return kName;
}

int GameObject::getCount()
{
    return count_;
}
GameObject::~GameObject()
{
}
