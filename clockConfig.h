#ifndef CLKCONFIG_H
#define CLKCONFIG_H

#include "configuration.h"

using namespace std;

class ClockConfig: public Configuration {

    private:
        int time;
        int goal;
    
    public:
        ClockConfig(int t);
        
        void plsHr();
        void mnsHr();
        bool validTime(int t);
        void print();
        
        bool final();
        
        bool empty();
        
        void setGoal(int g);
        
        int getTime();
        
        int getGoal();
    

};
#endif

