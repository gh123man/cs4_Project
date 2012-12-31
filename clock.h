#ifndef CLOCK_H
#define CLOCK_H

#include "puzzle.h"
#include "clockConfig.h"
#include <queue>

using namespace std;

class Clock: public Puzzle {

    
    public:
        void successors(Configuration *c, queue<Configuration*> &q);
    

};
#endif
