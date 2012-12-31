#ifndef CLKCONFIG_H
#define CLKCONFIG_H

#include "configuration.h"

using namespace std;

class ClockConfig: public Configuration {

    private:
        int time;
        int goal;
    
    public:
        ClockConfig(Configuration *c, int t);
        
        void plsHr();
        void mnsHr();
        bool validTime(int t);
        void print();
        
        bool final();
        
        void setGoal(int g);
        
        int getTime();
        
        int getGoal();
    

};
#endif

