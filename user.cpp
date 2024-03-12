#include "user.h"
#include <string>

User::User(const string& email, const string& name, const string& password, const vector<bool>& ACM, const int& index) :
    email(email), username(name), userpassword(password), Archivement(ACM), profilepic(index) {
    VecProgress.resize(6);
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

tuple<string, int, double> User::getBestGame() {
    double score = 0;
    int time = 86400;
    int index;
    for (int i = 0; i < VecProgress.size(); ++i) {
        if (VecProgress[i].getBestScore() > score) {
            score = VecProgress[i].getBestScore();
            time = VecProgress[i].getBestTime();
            index = i;
        } else if (VecProgress[i].getBestScore() == score) {
            if (VecProgress[i].getBestTime() < time) {
                score = VecProgress[i].getBestScore();
                time = VecProgress[i].getBestTime();
                index = i;
            }
        }
    }
    vector<string> game = {"Flaggle", "Mapper", "Time Teller", "Quick Math", "Hangman", "Speller"};
    return make_tuple(game[index], time, score);
}

vector<bool> User::getArchivement() const {
    return Archivement;
}

void User::setArchivement(int index) {
    Archivement[index] = true;
}

int User::getProfilePic() const {
    return profilepic;
}

void User::setProfilePic(const int& index) {
    profilepic = index;
}
