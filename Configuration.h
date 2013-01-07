#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <string>

using namespace std;


class Configuration {


    private:
        Configuration *parent;

    public:
        Configuration(Configuration *c);
        
        Configuration *getParent();
        
        virtual bool final() = 0;
        
        virtual void print() = 0;
        
        
        
};

#endif


