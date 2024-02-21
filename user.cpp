#include "user.h"
#include <string>

User::User(const string& email, const string& name, const string& password) : email(email), username(name), userpassword(password) {
    VecProgress.resize(7);
};

string User::getEmail() const {
    return email;
}

string User::getUsername() const {
    return username;
}

string User::getPassword() const {
    return userpassword;
}

bool User::verifyPassword(const string& pw) const {
    return userpassword == pw;
}

vector<Progress> User::getAllProgress() const{
    return VecProgress;
}

void User::setProgress(vector<Progress> vec) {
    VecProgress = vec;
}

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
