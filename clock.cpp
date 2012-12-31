

#include "clock.h"





void Clock::successors(Configuration *c, queue<Configuration*> &q) {

    
    ClockConfig *cc;
    cc = dynamic_cast<ClockConfig*>(c);
    
    
    Configuration *temp1 = new ClockConfig(cc->getTime());
    ClockConfig *a = dynamic_cast<ClockConfig*>(temp1);
    
    a->setGoal(cc->getGoal());
    a->plsHr();
    
    q.push(a);
    
    
    Configuration *temp2 = new ClockConfig(cc->getTime());
    ClockConfig *b = dynamic_cast<ClockConfig*>(temp2);
    
    b->setGoal(cc->getGoal());
    b->mnsHr();
    
    q.push(b);
    
    

}


int main(int argc, char *argv[]) {
    ClockConfig temp(1);
    temp.setGoal(5);
    Configuration *cc = &temp;
    
    
    Clock *clockPuzzle = new Clock();
    
    clockPuzzle->solve(cc)->print();


}
