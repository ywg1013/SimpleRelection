#include <QCoreApplication>
#include "baseobject.h"
#include "reflectobjectfactory.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    BaseObject* object = (BaseObject*)(ReflectObjectFactory::getInstance().createObjectByName("ReflectObject"));

    if(object)
    {
      std::cout<< object->age() << " , " << object->name() << std::endl;
      object->fly();
    }

    return a.exec();
}
