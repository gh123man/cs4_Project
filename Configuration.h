// @Name: Configuration.h
//
// @Authors: Brian Floersch (bpf4935@cs.rit.edu)
//
// @Description: A generic puzzle configuration.

#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <string>

using namespace std;


class Configuration {


    private:
        Configuration *parent;

    public:
        // @Name: Configuration
	    //
	    // @Description: constructor
	    //
	    // @Arugments: c - a generic configuration
        Configuration(Configuration *c);
        
        // @Name: getParent
	    //
	    // @Description: returns a pointer to the current configurations parent configuration
        Configuration *getParent();
        
        // @Name: final
	    //
	    // @Description: returns if configuration is final when implemented
        virtual bool final() = 0;
        
        // @Name: final
	    //
	    // @Description: prints configuration when implemented
        virtual void print() = 0;
        
        
        
};

#endif


