#include "reflectobjectfactory.h"

ReflectObjectFactory::ReflectObjectFactory()
{

}

void* ReflectObjectFactory::createObjectByName(std::string className){
    std::map<std::string, PTRCreateObject>::const_iterator iter;
    iter = m_classMap.find(className) ;
    if ( iter == m_classMap.end() )
        return NULL ;
    else
        return iter->second() ;
}

void ReflectObjectFactory::registClass(std::string name, PTRCreateObject method){
    m_classMap.insert(std::pair<std::string, PTRCreateObject>(name, method)) ;
}

ReflectObjectFactory& ReflectObjectFactory::getInstance(){
    static ReflectObjectFactory factory;
    return factory ;
}
