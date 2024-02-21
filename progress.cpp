#include "progress.h"

std::vector<int> Progress::getVecTime() const {
    std::vector<int> vec;
    vec.push_back(BestTime);
    vec.push_back(WorstTime);
    vec.push_back(AvgTime);
    for (int time: VecTime) {
        vec.push_back(time);
    }
    return vec;
}

std::vector<double> Progress::getVecScore() const {
    std::vector<double> vec;
    vec.push_back(BestScore);
    vec.push_back(WorstScore);
    vec.push_back(AvgScore);
    for (int score: VecScore) {
        vec.push_back(score);
    }
    return vec;
}

void Progress::addStat(int time, double score) {
    VecTime.emplace_back(time);
    if (time < BestTime) {
        BestTime = time;
    }
    if (time > Progress::WorstTime) {
        WorstTime = time;
    }
    double sumtime = 0;
    for (int i: VecTime) {
        sumtime += static_cast<double>(i);
    }
    AvgTime = sumtime/VecTime.size();

    VecScore.emplace_back(score);
    if (score > BestScore) {
        BestScore = score;
    }
    if (time < BestTime) {
        WorstScore = score;
    }
    double sumscore = 0;
    for (int i: VecScore) {
        sumscore += i;
    }
    AvgScore = sumscore/VecScore.size();
};

void Progress::setProgress(int bestTime, int worstTime, int avgTime, std::vector<int> vecTime,
                           double bestScore, double worstScore, double avgScore, std::vector<double> vecScore) {
    BestTime = bestTime;
    WorstTime = worstTime;
    AvgTime = avgTime;
    VecTime = vecTime;
    BestScore = bestScore;
    WorstScore = worstScore;
    AvgScore = avgScore;
    VecScore = vecScore;
}

