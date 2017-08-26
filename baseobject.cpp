#include "baseobject.h"


BaseObject::BaseObject():
    m_age(33)
  , m_name("yang"){

}

int BaseObject::age() const
{
    return m_age;
}

void BaseObject::setAge(int age)
{
    m_age = age;
}

std::string BaseObject::name() const
{
    return m_name;
}

void BaseObject::setName(const std::string &name)
{
    m_name = name;
}
