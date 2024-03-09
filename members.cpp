#include "members.h"

Members::Members() {}

bool Members::foundEmail(const string& inputEmail) const {
    for (const User& user : users) {
        if (user.getEmail() == inputEmail) {
            return true; // Email found
        }
    }
    return false; // Email not found
}

bool Members::foundUsername(const string& inputName) const {
    for (const User& user : users) {
        if (user.getUsername() == inputName) {
            return true; // Username found
        }
    }
    return false; // Username not found
}

bool Members::foundPassword(const string& inputPassword) const {
    for (const User& user : users) {
        if (user.getPassword() == inputPassword) {
            return true; // Password found
        }
    }
    return false; // Password not found
}

void Members::addUser(User newUser) {
    users.push_back(newUser);
}
vector<User> Members::getUsers() const {
    return users;
}
void Members::clearData() {
    users.clear();
}

pair<bool, int> Members::login(const string& inputName, const string& inputPassword) const {
    bool found = false;
    int index = -1;
    for (int i = 0; i < users.size(); ++i) {
        if (users[i].getUsername() == inputName) {
            index = i;
            found = true;
        }
    }
    if (!found) {
        if (users.empty()) {
            return make_pair(false, index);
        } else {
            return make_pair(false, index); // Username not found
        }
    } else {
        return make_pair(users[index].verifyPassword(inputPassword), index);
    }
}

void Members::addFlaggleProgress(const int& time, const int& score, const int& index) {
    users[index].setFlaggleProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::addMapperProgress(const int& time, const int& score, const int& index) {
    users[index].setMapperProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::addClockProgress(const int& time, const int& score, const int& index) {
    users[index].setClockProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::addCalProgress(const int& time, const int& score, const int& index) {
    users[index].setCalProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::addHangmanProgress(const int& time, const int& score, const int& index) {
    users[index].setHangmanProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::addSpellerProgress(const int& time, const int& score, const int& index) {
    users[index].setSpellerProgress(time, score);
    saveData(users[index].getUsername());
}

void Members::setUserArchivement(const int& user, const int& acm) {
    users[user].setArchivement(acm);
}

void Members::setUserProfilePic(const int& user, const int& pic) {
    users[user].setProfilePic(pic);
}

void Members::saveData(string loginuser) {
    ofstream outFile("Data.txt");
    if (!outFile) {
        //cerr << "Error: Unable to open file " << filename << " for writing." << endl;
        return;
    }

    for (const auto& user : users) {
        outFile << user.getEmail() << ";" << user.getUsername() << ";" << user.getPassword() << ";" << user.getProfilePic() << ";";
        for (const auto& acm: user.getArchivement()) {
            outFile << (acm ? 1 : 0) << ";";
        }
        for (const auto& progress: user.getAllProgress()) {
            int i = 0;
            for (const auto& time: progress.getVecTime()) {
                if (i >= 0 && i <= 2) {
                    outFile << time << ";";
                } else {
                    if (i == progress.getVecTime().size()-1) {
                        outFile << time << ";";
                    } else {
                        outFile << time << ",";
                    }
                }
                ++i;
            }
            if (progress.getVecTime().size() == 3) {
                outFile << ";";
            }
            int j = 0;
            for (const auto& score: progress.getVecScore()) {
                if (j >= 0 && j <= 2) {
                    outFile << score << ";";
                } else {
                    if (j == progress.getVecScore().size()-1){
                        outFile << score << ";";
                    } else {
                        outFile << score << ",";
                    }
                }
                ++j;
            }
            if (progress.getVecScore().size() == 3) {
                outFile << ";";
            }
        }
        outFile << "\n";
    }
    outFile << "/" <<loginuser << "/";
    outFile.close();
    //std::cout << "Data saved successfully." << std::endl;
}

std::string Members::loadData() {
    std::ifstream inFile("Data.txt");
    if (!inFile) {
        //std::cerr << "Error: Unable to open file " << filename << std::endl;
        return "none";
    }

    users.clear(); // Clear data before loading

    std::string line;
    while (std::getline(inFile, line) && line[0] != '/') {
        std::istringstream iss(line);
        std::string token;
        std::getline(iss, token, ';'); // email
        std::string email = token;
        std::getline(iss, token, ';'); // username
        std::string username = token;
        std::getline(iss, token, ';'); // password
        std::string pw = token;
        std::getline(iss, token, ';'); // profilepic
        int index = stoi(token);
        vector<bool> Vecacm;
        for (int i = 0; i < 4; ++i) {
            std::getline(iss, token, ';'); // email
            int acm = std::stoi(token);
            if (acm == 1) {
                Vecacm.push_back(true);
            } else {
                Vecacm.push_back(false);
            }
        }
        vector<Progress> VecProgress;
        for (int i = 0; i < 6; ++i) {
            std::getline(iss, token, ';'); // bestTime
            int bestTime = std::stoi(token);
            std::getline(iss, token, ';'); // worstTime
            int worstTime = std::stoi(token);
            std::getline(iss, token, ';'); // AvgTime
            int AvgTime = std::stoi(token);

            // Split VecTime by comma and store in vector
            std::getline(iss, token, ';'); // VecTime
            std::istringstream timeStream(token);
            std::vector<int> VecTime;
            if (!token.empty()) {
                while (std::getline(timeStream, token, ',')) {
                    VecTime.push_back(std::stoi(token)); // Convert string to int
                }
            }


            std::getline(iss, token, ';'); // bestScore
            double bestScore = std::stod(token);
            std::getline(iss, token, ';'); // worstScore
            double worstScore = std::stod(token);
            std::getline(iss, token, ';'); // AvgScore
            double AvgScore = std::stod(token);

            // Split VecScore by comma and store in vector
            std::getline(iss, token, ';'); // VecScore
            std::istringstream scoreStream(token);
            std::vector<double> VecScore;
            if (!token.empty()) {
                while (std::getline(scoreStream, token, ',')) {
                    VecScore.push_back(std::stod(token)); // Convert string to double
                }
            }

            Progress gameprogress;
            gameprogress.setProgress(bestTime, worstTime, AvgTime, VecTime, bestScore, worstScore, AvgScore, VecScore);
            VecProgress.push_back(gameprogress);
        }
        User u(email, username, pw, Vecacm, index);
        u.setProgress(VecProgress);
        addUser(u);
    }
    inFile.close(); // Move the close statement here

    // Check if the loop exited due to encountering "/"
    if (line[0] == '/') {
        // Check if there are characters between "/" separators
        size_t pos = line.find_last_of('/');
        if (pos != std::string::npos && pos < line.size()) {
            return line.substr(1, line.size()-2);
        } else {
            return "none";
        }
    } else {
        return "none";
    }
}


