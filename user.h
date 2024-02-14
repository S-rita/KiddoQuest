#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

struct SubjectProgress {
    int bestTime;
    int worstTime;
    int avgTime;
    int bestScore;
    int worstScore;
    int avgScore;
};

class User
{
private:
    string email;
    string username;
    string userpassword;
    struct ProgressChart {
        SubjectProgress geography;
        SubjectProgress math;
        SubjectProgress english;
    } progress;

public:
    User(const string& name, const string& password);
    string getEmail() const;
    string getUsername() const;
    string getPassword() const;
};

#endif // USER_H
