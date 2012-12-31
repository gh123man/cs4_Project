

#include "clock.h"





void Clock::successors(Configuration *c, queue<Configuration*> &q) {

    
    ClockConfig *cc;
    cc = dynamic_cast<ClockConfig*>(c);
    
    
    ClockConfig temp1(cc->getTime());
    temp1.setGoal(cc->getGoal());
    temp1.plsHr();
    Configuration *a = &temp1; 
    q.push(a);
    a->print();
    
    
    ClockConfig temp2(cc->getTime());
    temp2.setGoal(cc->getGoal());
    temp2.mnsHr();
    Configuration *b = &temp2; 
    q.push(b);
    b->print();
    q.front()->print();
    
    

}


int main(int argc, char *argv[]) {
    ClockConfig temp(1);
    temp.setGoal(2);
    Configuration *cc = &temp;
    
    
    Clock *clockPuzzle = new Clock();
    
    clockPuzzle->solve(cc);


}
