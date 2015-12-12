#include "Dweller.h"


Dweller::Dweller(const string& Name, const int& SPECIAL) :GameObject(Name), position_(0, 0), SPECIAL_(SPECIAL), health_(100), radiation_(0), stimpak_(0), radaway_(0), outfit_(0), weapon_(0)
{
}


Dweller::~Dweller()
{
}
