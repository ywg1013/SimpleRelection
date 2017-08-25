#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include<string>


class BaseObject
{
public:
    BaseObject();

    virtual void fly() = 0;

    int age() const;
    void setAge(int age);

    std::string name() const;
    void setName(const std::string &name);

private:
    int m_age;
    std::string m_name;
};

#endif // BASEOBJECT_H
