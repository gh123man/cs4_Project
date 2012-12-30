#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>

using namespace std;


class Configuration {

    private:

    public:
        configuration();
        
        virtual bool final() = 0;
        
        virtual bool empty() = 0;
        
        virtual String toString() = 0;

}

#endif


