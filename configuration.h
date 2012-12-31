#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <string>

using namespace std;


class Configuration {


    public:
        Configuration();
        
        virtual bool final() = 0;
        
        virtual bool empty() = 0;
        
        virtual void print() = 0;
        
};

#endif


