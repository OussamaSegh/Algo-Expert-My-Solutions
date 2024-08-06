#pragma once 
#include <vector>
#include <unordered_map>
#include <string>
#include <climits>
#include <iostream>

using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {
    unordered_map<string, int> winners;
    string currentBestTeam;
    int maxPoints = INT_MIN;

    for (int i = 0; i < results.size(); i++) {
        auto& curCompetition = competitions[i];
        int curResult = results[i];
        string winningTeam = curResult == 1 ? curCompetition[0] : curCompetition[1];
        
        winners[winningTeam] += 3;

        if (winners[winningTeam] > maxPoints) {
            maxPoints = winners[winningTeam];
            currentBestTeam = winningTeam;
        }
    }

    return currentBestTeam;
}
