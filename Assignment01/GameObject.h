#pragma once
#include <string>

using std::string;
class GameObject
{
public:
    virtual ~GameObject();
    string getName();

private:
    const string kName;
    int count_;
protected:
    GameObject(const string& Name);
};
