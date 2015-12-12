#pragma once
#include "GameObject.h"
#include "Vec2D.h"
#include "Outfit.h"
#include "Weapon.h"
#include <string>

class Dweller :
    public GameObject
{
public:
    Dweller(const string&, const int&);
    virtual ~Dweller();
    const int getSPECIAL();
    const int getCurrentHealth();
    const int getCurrentRadDamage();
    const int getAttackDmg();
    void setPosition(const Vec2D& position);
    const Vec2D getPosition();
    void receiveHealthDamage(const int& health);
    void receiveRadDamage(const int& radiation);
    void receiveEquipmentDamage(const int& eqdmg);
    void addStimpak(const int& medkit);
    void addRadAway(const int& radkit);
    void useStimpak();
    void useRadAway();
    Outfit* assignOutfit(Outfit* outfit);
    Weapon* assignWeapon(Weapon*);
    bool isDead();

private:
    Vec2D position_;
    int SPECIAL_;
    int health_;
    int radiation_;
    int stimpak_;
    int radaway_;
    Outfit* outfit_;
    Weapon* weapon_;
};

