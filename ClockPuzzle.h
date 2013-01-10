// @Name: ClockPuzzle.h
//
// @Authors: Brian Floersch (bpf4935@cs.rit.edu)
//
// @Description: A clock puzzle implementation (requires Puzzle)

#ifndef CLOCK_H
#define CLOCK_H

#include "Puzzle.h"
#include "ClockConfig.h"
#include <queue>

using namespace std;

class Clock: public Puzzle {

    
    public:
        // @Name: successors
	    //
	    // @Description: generates and returns a pointer to a vector of next valid configurations
	    //
	    // @Arugments: c - a generic configuration
        vector<Configuration*> successors(Configuration *c);
    

};
#endif
