#include "puzzleConfig.h"


using namespace std;

class ClockConfig: public Configuration {

    private:
        int time;
        ClockConfig *final;
    
    public:
    
        void plusHr();
        void mnsHr();
        bool validTime(int t);
        void print();
        
        bool final();
        
        bool empty();
        
        void setGoal(ClockConfig *c);
        
        int getTime();
    

}
