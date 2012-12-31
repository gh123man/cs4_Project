
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

        virtual void successors(Configuration *c, queue<Configuration*> &q) = 0;

        
        


};

#endif
