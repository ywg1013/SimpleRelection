#ifndef REFLECTOBJECTFACTORY_H
#define REFLECTOBJECTFACTORY_H

#include <map>
#include <iostream>
#include <string>


typedef void* (*PTRCreateObject)(void);

class ReflectObjectFactory
{

private:
    ReflectObjectFactory();
    ~ReflectObjectFactory();

public:
    void* CreateObjectByName(std::string className);
    void RegistClass(std::string name, PTRCreateObject method) ;
    static ReflectObjectFactory& Instance() ;

private:
    std::map<std::string, PTRCreateObject> m_classMap ;

};



class RegisterAction{
public:
    RegisterAction(std::string className,PTRCreateObject ptrCreateFn){
        ReflectObjectFactory::Instance().RegistClass(className,ptrCreateFn);
    }
};

#define REGISTER_CLASS(className)                                             \
    className* objectCreator##className(){                              \
        return new className;                                           \
    }                                                                   \
    RegisterAction g_creatorRegister##className(                        \
        #className,(PTRCreateObject)objectCreator##className);






#endif // REFLECTOBJECTFACTORY_H
