#ifndef USER_H
#define USER_H

#include <string>
#include "progress.h"
using namespace std;

class User
{
private:
    string email;
    string username;
    string userpassword;
    vector<Progress> VecProgress;

public:
    User(const string& email, const string& name, const string& password);
    string getEmail() const;
    string getUsername() const;
    string getPassword() const;
    vector<Progress> getAllProgress() const;
    void setProgress(vector<Progress> vec);
    bool verifyPassword(const string& pw) const;
};

#endif // USER_H
