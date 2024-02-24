#ifndef PROGRESS_H
#define PROGRESS_H

#include <vector>
#include <tuple>

class Progress
{
private:
    std::vector<int> VecTime;
    int BestTime = 86400;
    int WorstTime = 0;
    int AvgTime = 0;

    std::vector<double> VecScore;
    double BestScore = 0.0;
    double WorstScore = 10000.0;
    double AvgScore = 0.0;

public:
    std::vector<int> getVecTime() const;
    std::vector<double> getVecScore() const;
    void addStat(int time, double score);
    void setProgress(int bestTime, int worstTime, int avgTime, std::vector<int> vecTime,
                     double bestScore, double worstScore, double avgScore, std::vector<double> vecScore);
};

#endif // PROGRESS_H