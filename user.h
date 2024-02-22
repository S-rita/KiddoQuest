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
    void setFlaggleProgress(const int& time, const int& score);
    void setMapperProgress(const int& time, const int& score);
    void setClockProgress(const int& time, const int& score);
    void setCalProgress(const int& time, const int& score);
    void setHangmanProgress(const int& time, const int& score);
    void setSpellerProgress(const int& time, const int& score);
};

#endif // USER_H
