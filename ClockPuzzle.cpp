

#include "ClockPuzzle.h"





vector<Configuration*> Clock::successors(Configuration *c) {
    
    vector<Configuration*> configs;
    
    ClockConfig *cc;
    cc = dynamic_cast<ClockConfig*>(c);
    
    
    Configuration *temp1 = new ClockConfig(c, cc->getHours(), cc->getTime(), cc->getGoal());
    ClockConfig *a = dynamic_cast<ClockConfig*>(temp1);
    
    a->plsHr();
    
    configs.push_back(a);
    
    
    Configuration *temp2 = new ClockConfig(c, cc->getHours(), cc->getTime(), cc->getGoal());
    ClockConfig *b = dynamic_cast<ClockConfig*>(temp2);
    
    b->mnsHr();
    
    configs.push_back(b);
    
    return configs;
    

}














