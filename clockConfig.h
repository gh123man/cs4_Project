#ifndef CLKCONFIG_H
#define CLKCONFIG_H

#include "configuration.h"

using namespace std;

class ClockConfig: public Configuration {

    private:
        int hours;
        int time;
        int goal;
    
    public:
        ClockConfig(Configuration *c, int hrs, int t, int g);
        
        void plsHr();
        void mnsHr();
        bool validTime(int t);
        void print();
        
        bool final();
        
        int getTime();
        
        int getHours();
        int getGoal();
    

};
#endif

