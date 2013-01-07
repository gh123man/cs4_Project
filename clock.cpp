#include <stdio.h>
#include <stdlib.h>
#include "ClockPuzzle.h"


int main(int argc, char *argv[]) {

    //Print usage statement
    if(argc < 4 || argc > 4){
        cerr << "The usage statement for this puzzle is:"<<endl;
	    cerr << "clock clock_hours start_time goal_time" << endl;
	    cerr << "exiting..." << endl;
	    exit(1);

    } else {
        
        int hours = atoi(argv[1]);
        
        int time = atoi(argv[2]);
        
        int goal = atoi(argv[3]);
        
        if (time > hours || goal > hours || time < 1 || goal < 1 || hours < 1) {
            cerr << "invlid hours, start or goal time" << endl;
            cerr << "exiting..." << endl;
        } else {
        
            ClockConfig temp(NULL, hours, time, goal);
            
            Configuration *cc = &temp;
            
            Clock *clockPuzzle = new Clock();
            
            cc = clockPuzzle->solve(cc);
            
            cout << "Path take is as follows (from start to goal)" << endl;
            clockPuzzle->printTrace(cc);
            
            delete clockPuzzle;
            
        }
        
    }
}
