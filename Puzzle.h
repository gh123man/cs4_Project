// @Name: Puzzle.h
//
// @Authors: Brian Floersch (bpf4935@cs.rit.edu)
//
// @Description: A generic puzzle class.


#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <queue>
#include <vector>
#include "Configuration.h"


using namespace std;


class Puzzle {

        
    public:
    
        // @Name: solve
	    //
	    // @Description: solves the configuration
	    //
	    // @Arugments: c - a generic configuration pointer
        Configuration *solve(Configuration *c);

        // @Name: printTrace
	    //
	    // @Description: prints the shortest path taken by the solver
	    //
	    // @Arugments: c - a generic configuration pointer
        void printTrace(Configuration *c);
        
        // @Name: successors
	    //
	    // @Description: generates next valid configurations when implemented
	    //
	    // @Arugments: c - a generic configuration pointer
        virtual  vector<Configuration*> successors(Configuration *c) = 0;
        

};

#endif
