#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <string>
#include <vector>

struct Player {
    std::string name;
    int score;
    int consecutiveWins;
};


void updateScoreboard(const std::string& playerName, int score, int consecutiveWins);
void showRankings();

#endif // SCOREBOARD_H
