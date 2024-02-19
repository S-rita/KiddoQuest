#include "managedata.h"

void saveData(const Members members) {
    ofstream outFile("Data.txt");
    if (!outFile) {
        //cerr << "Error: Unable to open file " << filename << " for writing." << endl;
        return;
    }

    for (const auto& user : members.getUsers()) {
        outFile << user.getEmail() << ";" << user.getUsername() << ";" << user.getPassword() << ";";
        for (const auto& progress : user.getAllProgress()) {
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
            outFile << ";";
            int j = 0;
            for (const auto& score: progress.getVecScore()) {
                if (j >= 0 && j <= 2) {
                    outFile << score << ";";
                } else {
                    if (j == progress.getVecScore().size()-1) {
                        outFile << score << ";";
                    } else {
                        outFile << score << ",";
                    }
                }
                ++j;
            }
            outFile << ";";
        }
        outFile << "\n";
    }
    outFile.close();
    //std::cout << "Data saved successfully." << std::endl;
}

void loadData(Members& members) {
    std::ifstream inFile("Data.txt");
    if (!inFile) {
        //std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    members.clearData(); // Clear data before loading

    std::string line;
    while (std::getline(inFile, line)) {
        std::istringstream iss(line);
        std::string token;
        std::getline(iss, token, ';'); // email
        std::string email = token;
        std::getline(iss, token, ';'); // username
        std::string username = token;
        std::getline(iss, token, ';'); // password
        std::string pw = token;
        vector<Progress> VecProgress;
        for (int i = 0; i < 7; ++i) {
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
        User u(email, username, pw);
        u.setProgress(VecProgress);
        members.addUser(u);
    }
    inFile.close();
    //std::cout << "Data loaded successfully." << std::endl;
}
