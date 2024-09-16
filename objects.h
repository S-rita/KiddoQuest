#ifndef OBJECTS_H
#define OBJECTS_H

#include <string>

class Objects
{
private:
    std::string ObjectName;
    std::string ObjectPath;

public:
    Objects(const std::string& name="default", const std::string& path="default");

    std::string getObjectName();
    std::string getObjectPath();


};

#endif // OBJECTS_H
