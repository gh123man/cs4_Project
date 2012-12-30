

#include "clock.h"
#include <vector>

Clock::Clock(ClockConfig *cc): puzzle(cc) {
}

vector<Configuration*> Clock::successors(Configuraton *c) {

    vector<Configuration*> configs;
    
    Configuration *a = new ClockConfig();
    a->plsHr();
    configs.push(a);
    
    Configuration *b = new ClockConfig();
    b->mnsHr();
    configs.push(b);
    
    return configs;

}


void main(int argc, char *argv[]) {
    
    
    
    clockConfig cc = new ClockConfig(12);
    cc->setGoal(new ClockConfig(3));
    
    Clock clockPuzzle = new Clock(cc);
    
    solve(cc)->print();


}
