// @Name: ClockConfig.h
//
// @Authors: Brian Floersch (bpf4935@cs.rit.edu)
//
// @Description: A clock puzzle configuration implementation (requires Configuration)

#ifndef CLKCONFIG_H
#define CLKCONFIG_H

#include "Configuration.h"

using namespace std;

class ClockConfig: public Configuration {

    private:
        int hours;
        int time;
        int goal;
    
    public:
    
        // @Name: ClockConfig
	    //
	    // @Description: Constructor
	    //
	    // @Arugments: c - a generic configuration
	    //             hrs - number of hours on the clock
	    //             t - current time on the clock
	    //             g - goal time for the clock
        ClockConfig(Configuration *c, int hrs, int t, int g);
        
        // @Name: plsHr
	    //
	    // @Description: adds one hour to the clock
        void plsHr();
        
        // @Name: mnsHr
	    //
	    // @Description: subtracts one hour to the clock
        void mnsHr();
        
        // @Name: ClockConfig
	    //
	    // @Description: Constructor
	    //
	    // @Arugments: t - integer representing a possible time
        bool validTime(int t);
        
        // @Name: print
	    //
	    // @Description: prints the object
        void print();
        
        // @Name: final
	    //
	    // @Description: returns if configuration is final
        bool final();
        
        // @Name: getTime
	    //
	    // @Description: returns current time
        int getTime();
        
        // @Name: getHours
	    //
	    // @Description: returns number of hours on the clock
        int getHours();
        
        // @Name: getGoal
	    //
	    // @Description: returns the goal time
        int getGoal();
    

};
#endif

