#include <iostream>
#include "Importer.h"
#include "Player.h"
#include "Exporter.h"
#include "SixtyNine.h"

#define FILE "TresAmigos.csv"

void printPlacements(std::vector<Player> &players);

int main() {

    std::vector<std::string> table;

    std::vector<Player> players;


    std::vector<int> gScores = { 45,69,69,69,0,15,69,55,21,51,61,47,69,30,69,67,60,69,64,58,69,25,25,58,24,6,26 };
    std::vector<int> sScores = { 67,61,50,43,69,13,57,69,69,39,43,69,64,69,60,69,69,50,65,65,42,69,69,65,69,69,69 };
    std::vector<int> kScores = { 69,67,65,24,7,69,50,62,31,69,69,56,39,40,66,63,62,22,69,69,40,17,61,69,56,65,46 };

    Player player(gScores, "Gabe");


    players.emplace_back(gScores, "Gabe");
    players.emplace_back(sScores, "Sassan");
    players.emplace_back(kScores, "Khalen");


    //Exporter::printToConsole(players);
    //Exporter::printToFile(players, "Amigos.csv");

    //SixtyNine::getPlayerInFirst(players);

    printPlacements(players);

    return 0;
}

void printPlacements(std::vector<Player> &players) {
    printf("1st Place: %s\nWins: %d\n\n", players.at(SixtyNine::getPlayerInFirst(players)).getName().c_str(),
           players.at(SixtyNine::getPlayerInFirst(players)).getWins());

    printf("2nd Place: %s\nWins: %d\n\n", players.at(SixtyNine::getPlayerInSecond(players)).getName().c_str(),
                players.at(SixtyNine::getPlayerInSecond(players)).getWins());

    printf("3rd Place: %s\nWins: %d\n\n", players.at(SixtyNine::getPlayerInThird(players)).getName().c_str(),
                players.at(SixtyNine::getPlayerInThird(players)).getWins());
}
