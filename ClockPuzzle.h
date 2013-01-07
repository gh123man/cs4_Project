#ifndef CLOCK_H
#define CLOCK_H

#include "Puzzle.h"
#include "ClockConfig.h"
#include <queue>

using namespace std;

class Clock: public Puzzle {

    
    public:
        vector<Configuration*> successors(Configuration *c);
    

};
#endif
