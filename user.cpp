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

void User::setFlaggleProgress(const int& time, const int& score) {
    VecProgress[0].addStat(time, score);
}

void User::setMapperProgress(const int& time, const int& score) {
    VecProgress[1].addStat(time, score);
}

void User::setClockProgress(const int& time, const int& score) {
    VecProgress[2].addStat(time, score);
}

void User::setCalProgress(const int& time, const int& score) {
    VecProgress[3].addStat(time, score);
}

void User::setHangmanProgress(const int& time, const int& score) {
    VecProgress[4].addStat(time, score);
}

void User::setSpellerProgress(const int& time, const int& score) {
    VecProgress[5].addStat(time, score);
}

