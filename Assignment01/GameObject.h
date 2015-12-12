#ifndef _GAMEOBJECT_H
#define _GAMEOBJECT_H
#include <string>

using std::string;
class GameObject
{
public:
    virtual ~GameObject();
    string getName();
    static int getCount();

private:
    const string kName;
    static int count_;
protected:
    GameObject(const string& Name);
};
#endif