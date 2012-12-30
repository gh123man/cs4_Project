#include <iostream>
#include <queue>;
#include <vector>;
#include "configuration.h"


using namespace std;


class Puzzle {

    private:
    Configuration *config

    public:
        puzzle(Configuration *c);

        Configuration *solve(Configuration *c);

        virtual vector<Configuration*> successors(Configuraton *c) = 0;

        
        


}
