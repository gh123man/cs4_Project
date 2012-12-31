
#include <stdio.h>
#include <stdlib.h>
#include "puzzle.h"


Configuration *Puzzle::solve(Configuration *c) {

    queue<Configuration*> q;
    q.push(c);
    Configuration *cfg;

    while (!q.empty() && !q.front()->final()) {
    
        cfg = q.front();
        q.pop();
        successors(cfg, q);
        
    }
    
    if (q.empty()) {
        cout << "No soluton to this problem" << endl;
        exit(1);
    } else {
        return q.front();
    }

}


/*

Create an initially empty queue of configurations.
    Insert the initial configuration into the queue.
    While
      the queue is not empty and
      the first configuration in the queue does not meet the goal,
    loop:
        Remove the first configuration from the queue and call it cfg.
        For each move applicable to cfg, loop:
            Make the move and enqueue the resulting
            configuration if it has not already been seen.
        end-loop.
    end-loop.
    The acceptable configuration is now at the head of the queue;
    but if the queue is empty, there is no solution to the problem.

*/
