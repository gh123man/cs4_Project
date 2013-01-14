#include "ClockConfig.h"

ClockConfig::ClockConfig(Configuration *c, int hrs, int t, int g): Configuration(c), hours(hrs), time(t), goal(g) {
}

bool ClockConfig::validTime(int t) {
    if (t <= hours && t > 0) {
        return true;
    } else {
        return false;    
    }
}

void ClockConfig::plsHr() {
    if (validTime(time + 1)) {
        time++;
        
    } else {
        time = 1;
    }
}   

void ClockConfig::mnsHr() {
    if (validTime(time - 1)) {
        time--;
        
    } else {
        time = hours;
    }
} 

void ClockConfig::print() {

    cout << "time: " << time << endl;

}

int ClockConfig::getTime() {
    return time;
}

bool ClockConfig::final(){

    if (goal == time) {
        return true;
    } else {
        return false;
    }

}

int ClockConfig::getHours() {
    return hours;
}

int ClockConfig::getGoal() {
    return goal;
}

ClockConfig::~ClockConfig(){}











