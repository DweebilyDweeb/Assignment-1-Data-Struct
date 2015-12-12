#include "Dweller.h"


Dweller::Dweller(const string& Name, const int& SPECIAL) :GameObject(Name), position_(0, 0), SPECIAL_(SPECIAL), health_(100), radiation_(0), stimpak_(0), radaway_(0), outfit_(0), weapon_(0)
{
}


Dweller::~Dweller()
{
}

const int Dweller::getSPECIAL()
{
    return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
    return health_;
}

const int Dweller::getCurrentRadDamage()
{
    return radiation_;
}

const int Dweller::getAttackDmg()
{
    if (weapon_ == 0)
        return 1;
    else

        return weapon_->getAttackDmg();
}

void Dweller::setPosition(const Vec2D& position)
{
    position_.x = position.x;
    position_.y = position.y;

}

const Vec2D Dweller::getPosition()
{
    return position_;
}

void Dweller::receiveHealthDamage(const int& health)
{
    health_ -= health;
}

void Dweller::receiveRadDamage(const int& radiation)
{
    health_ -= radiation;
}

void Dweller::receiveEquipmentDamage(const int& eqdmg)
{
    if (outfit_ != 0)
    outfit_->receiveDamage(eqdmg);
    if (weapon_ != 0)
    weapon_->receiveDamage(eqdmg);
}

void Dweller::addStimpak(const int& medkit)
{
    stimpak_ += medkit;
}

void Dweller::addRadAway(const int& radkit)
{
    radaway_ += radkit;
}

void Dweller::useStimpak()
{
    stimpak_ -= 1;
    health_ += 20;
    if (health_ > 100)
        health_ = 100;
}

void Dweller::useRadAway()
{
    radaway_ -= 1;
    radiation_ - 10;

    if (radiation_ < 0)
        radiation_ = 0;
}

Outfit* Dweller::assignOutfit(Outfit* outfit)
{
    if (isDead() == false)
    {
        delete outfit_;
        outfit_ = new Outfit(outfit->getName, outfit->getDurability, outfit->getSPECIAL);
        return outfit_;
    }
    if (isDead() == true)
        return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon* weapon)
{
    if (isDead() == false)
        delete weapon_;
    weapon_ = new Weapon(weapon->getName, weapon->getDurability, weapon->getAttackDmg);
    if (isDead() == true)
        return weapon_;
}

bool Dweller::isDead()
{
    if (health_ <= 0)
        return true;
    else 
        return false;
}