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
    vector<bool> Archivement;
    int profilepic;

public:
    User(const string& email, const string& name, const string& password, const vector<bool>& Archivement  = {false, false, false, false},
         const int& index = 0);
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
    tuple<string, int, double> getBestGame();
    vector<bool> getArchivement() const;
    void setArchivement(int index);
    int getProfilePic() const;
    void setProfilePic(const int& index);
};

#endif // USER_H
