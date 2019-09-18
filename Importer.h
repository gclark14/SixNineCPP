//
// Created by Gabriel on 9/17/2019.
//

#ifndef SIXNINE_IMPORTER_H
#define SIXNINE_IMPORTER_H

#include <vector>
#include "fstream"
#include "iostream"

class Importer {
private:

public:

    static std::vector<std::string> import(std::ifstream &fin) {
        std::string s;
        std::vector<std::string> table;

        while(getline(fin, s)) {
            table.push_back(s);
        }
        return table;
    }


};


#endif //SIXNINE_IMPORTER_H
