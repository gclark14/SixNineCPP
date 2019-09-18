//
// Created by Gabriel on 9/17/2019.
//

#ifndef SIXNINE_PLAYER_H
#define SIXNINE_PLAYER_H

#include "iostream"
#include "vector"

class Player {
private:
    std::string name;
    std::vector<int> scores;
    int wins = 0;

public:
    Player(const std::vector<int> &scores, const std::string &name) {
        this->name = name;
        this->scores = scores;
        setWins();
    }

    int getWins() const {
        return wins;
    }

    void setWins() {
        for(const int &score: scores) {
            if(score == 69) {
                wins++;
            }
        }
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Player::name = name;
    }

    const std::vector<int> &getScores() const {
        return scores;
    }

    void setScores(const std::vector<int> &scores) {
        Player::scores = scores;
    }

};


#endif //SIXNINE_PLAYER_H
