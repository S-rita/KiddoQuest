#ifndef MEMBERS_H
#define MEMBERS_H

#include "user.h"
#include <vector>
#include <string>

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
    bool login(const string& inputName, const string& inputPassword) const;

};

#endif // MEMBERS_H
