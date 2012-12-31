
#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <queue>
#include <vector>
#include "configuration.h"


using namespace std;


class Puzzle {

    private:
        vector< vector<Configuration*> > log;
        
    public:

        Configuration *solve(Configuration *c);

        virtual void successors(Configuration *c, queue<Configuration*> &q) = 0;
        
        void trace(int pos, Configuration *c);
        
        void printPath();

        
        


};

#endif
