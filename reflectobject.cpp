#include "reflectobject.h"
#include "reflectobjectfactory.h"

REGISTER_CLASS(ReflectObject)

ReflectObject::ReflectObject()
{

}

void ReflectObject::fly()
{
   std::cout<< "I can fly . " <<std::endl;
}
