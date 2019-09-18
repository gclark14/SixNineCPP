//
// Created by Gabriel on 9/17/2019.
//

#ifndef SIXNINE_EXPORTER_H
#define SIXNINE_EXPORTER_H

#include <vector>
#include "iostream"
#include "fstream"
#include "Player.h"

class Exporter {
private:

public:

    static void printToConsole(const std::vector<Player> &players) {
        std::string names;
        std::vector<std::string> scores;

        for(const Player &player: players) {
            names += player.getName() + ',';
        }

        // Final name is going to append a ','
        // This replaces with a '\n'
        names.pop_back();
        names.push_back('\n');

        int sSize = players.at(0).getScores().size();
        int pSize = players.size();
        for(int i = 0; i < sSize; i++) {
            std::string s;
            for(int j = 0; j < pSize; j++) {
                s += std::to_string(players.at(j).getScores().at(i)) + ',';
            }
            s.pop_back();
            s.push_back('\n');

            scores.push_back(s);
        }

        std::cout << names;
        for(const std::string &score: scores) {
            std::cout << score;
        }

    }

    static void printToFile(const std::vector<Player> &players, const std::string &fileName) {

        std::ofstream fout;
        fout.open(fileName);

        std::string names;
        std::vector<std::string> scores;

        for(const Player &player: players) {
            names += player.getName() + ',';
        }

        // Final name is going to append a ','
        // This replaces with a '\n'
        names.pop_back();
        names.push_back('\n');

        int sSize = players.at(0).getScores().size();
        int pSize = players.size();
        for(int i = 0; i < sSize; i++) {
            std::string s;
            for(int j = 0; j < pSize; j++) {
                s += std::to_string(players.at(j).getScores().at(i)) + ',';
            }
            s.pop_back();
            s.push_back('\n');

            scores.push_back(s);
        }

        /*
        fout << names;
        for(const std::string &score: scores) {
            fout << score;
        }
         */

        fout.close();

    }

};


#endif //SIXNINE_EXPORTER_H
