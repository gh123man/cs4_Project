
#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <queue>
#include <vector>
#include "configuration.h"


using namespace std;


class Puzzle {

    private:
        
    public:

        Configuration *solve(Configuration *c);

        void printTrace(Configuration *c);
        
        virtual  vector<Configuration*> successors(Configuration *c) = 0;
        
        

};

#endif
