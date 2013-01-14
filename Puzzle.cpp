
#include <stdio.h>
#include <stdlib.h>
#include "Puzzle.h"


Configuration *Puzzle::solve(Configuration *c) {

    queue<Configuration*> q;
    vector<Configuration*> configs;
    q.push(c);
    Configuration *cfg;
    while (!q.empty() && !q.front()->final()) {
    
        cfg = q.front();
        q.pop();
        configs = successors(cfg);
        
        for(int i = 0; i < configs.size(); i++) {
            
            if (configs[i]->final()) {
                return configs[i];
            } else {
                q.push(configs[i]);
            }
        }
    }
    
    if (q.empty()) {
        cout << "No soluton to this problem" << endl;
        exit(1);
    } else {
        return q.front();
    }

}


void Puzzle::printTrace(Configuration *c) {
    
    vector<Configuration*> trace;
    trace.push_back(c);

    while(c != NULL) {
    
        trace.push_back(c->getParent());
        c = c->getParent();
        
    }
    
    for (int i = trace.size()-1; i > 0; i--) {
        trace[i-1]->print();
    
    }
}

Puzzle::~Puzzle(){}



