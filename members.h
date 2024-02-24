#ifndef MEMBERS_H
#define MEMBERS_H

#include "user.h"
#include <vector>
#include <string>
#include <utility>
#include <fstream>
#include <sstream>

using namespace std;

class Members
{
private:
    vector<User> users;

public:
    Members();
    bool foundEmail(const string& inputEmail) const;
    bool foundUsername(const string& inputName) const;
    bool foundPassword(const string& inputPassword) const;
    void addUser(User newUser);
    vector<User> getUsers() const;
    void clearData();
    pair<bool, int> login(const string& inputName, const string& inputPassword) const;
    void addFlaggleProgress(const int& time, const int& score, const int& index);
    void addMapperProgress(const int& time, const int& score, const int& index);
    void addClockProgress(const int& time, const int& score, const int& index);
    void addCalProgress(const int& time, const int& score, const int& index);
    void addHangmanProgress(const int& time, const int& score, const int& index);
    void addSpellerProgress(const int& time, const int& score, const int& index);
    string loadData();
    void saveData(string loginuser = "//");

};

#endif // MEMBERS_H
