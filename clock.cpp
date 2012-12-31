

#include "clock.h"





vector<Configuration*> Clock::successors(Configuration *c) {
    
    vector<Configuration*> configs;
    
    ClockConfig *cc;
    cc = dynamic_cast<ClockConfig*>(c);
    
    
    Configuration *temp1 = new ClockConfig(c, cc->getTime());
    ClockConfig *a = dynamic_cast<ClockConfig*>(temp1);
    
    a->setGoal(cc->getGoal());
    a->plsHr();
    
    configs.push_back(a);
    
    
    Configuration *temp2 = new ClockConfig(c, cc->getTime());
    ClockConfig *b = dynamic_cast<ClockConfig*>(temp2);
    
    b->setGoal(cc->getGoal());
    b->mnsHr();
    
    configs.push_back(b);
    
    return configs;
    

}


int main(int argc, char *argv[]) {
    ClockConfig temp(NULL, 12);
    temp.setGoal(6);
    Configuration *cc = &temp;
    
    
    Clock *clockPuzzle = new Clock();
    
    cc = clockPuzzle->solve(cc);
    
    cout << "Path take is as follows (from start to goal)" << endl;
    clockPuzzle->printTrace(cc);
    


}
