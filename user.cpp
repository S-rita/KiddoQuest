#include "user.h"
#include <string>

User::User(const std::string& name, const std::string& password) : username(name), userpassword(password) {};

std::string User::getEmail() const {
    return email;
}


std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return userpassword;
}
