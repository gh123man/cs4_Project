
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

void Puzzle::trace(int pos, Configuration *c) {

    if (log.size()-1 < pos || log.size() == 0) {
        vector<Configuration*> v;
        v.push_back(c);
        log.push_back(v);
        log.at(pos).push_back(c);
    } else {
        log.at(pos).push_back(c);
    }
    
}

void Puzzle::printPath() {

    int hold = 0;
    for (int i = 0; i < log.size(); i++) {
        if (log[i].size() < log[hold].size()) {
            hold = i;
            
        }
    }
    
    for (int i = 0; i < log[hold].size(); i++) {
        log[hold][i]->print();
    }
}




