#include "objects.h"

Objects::Objects(const std::string& name, const std::string& path)
    : ObjectName(name), ObjectPath(path) {}

std::string Objects::getObjectName() {
    return ObjectName;
}

std::string Objects::getObjectPath() {
    return ObjectPath;
}
