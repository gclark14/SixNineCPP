//
// Created by Gabriel on 9/17/2019.
//

#ifndef SIXNINE_SIXTYNINE_H
#define SIXNINE_SIXTYNINE_H

#include <windef.h>
#include <climits>
#include "Player.h"
#include "iostream"

#define DEBUG

class SixtyNine {
private:

public:

    static int getPlayerInFirst(const std::vector<Player> &players){
        const int PSIZE = players.size();
        int winsPerPlayer[PSIZE];

        for(int i = 0; i < PSIZE; i++) {
            winsPerPlayer[i] = players.at(i).getWins();
        }

        int max = 0;
        for(int i = 0; i < PSIZE; i++) {
            if(winsPerPlayer[i] > max) {
                max = winsPerPlayer[i];
            }
        }

        for(int i = 0; i < PSIZE; i++) {
            if(winsPerPlayer[i] == max) {
                return i;
            }
        }

        return -1;
    }

    static int getPlayerInSecond(const std::vector<Player> &players){
        const int PSIZE = players.size();
        const int FIRST_INDEX = getPlayerInFirst(players);
        const int THIRD_INDEX = getPlayerInThird(players);

        for(int i = 0; i < PSIZE; i++)
            if(i != FIRST_INDEX and i != THIRD_INDEX)
                return i;

        return -1;
    }

    static int getPlayerInThird(const std::vector<Player> &players){
        const int PSIZE = players.size();
        int winsPerPlayer[PSIZE];

        for(int i = 0; i < PSIZE; i++) {
            winsPerPlayer[i] = players.at(i).getWins();
        }

        int min = INT_MAX;

        for(int i = 0; i < PSIZE; i++) {
            if(winsPerPlayer[i] < min) {
                min = winsPerPlayer[i];
            }
        }

        for(int i = 0; i < PSIZE; i++) {
            if(winsPerPlayer[i] == min) {
                return i;
            }
        }

        return -1;
    }


};


#endif //SIXNINE_SIXTYNINE_H
