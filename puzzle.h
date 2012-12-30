#include <iostream>
#include <queue>;
#include <vector>;
#include "configuration.h"




using namespace std;


class Puzzle {

    private:

    public:
        puzzle();

        configuration *solve(configuration *c);

        virtual vector<configuration*> successors(configuraton *c) = 0;

        
        


}
