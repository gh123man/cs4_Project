#include "clockConfig.h"

ClockConfig::ClockConfig(int t = 12): time(t) {
}

bool ClockConfig::validTime(int t) {
    if (t < 13 && t > 0) {
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
        time = 12;
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

bool ClockConfig::empty() {
    return false;
}

int ClockConfig::getGoal() {
    return goal;
}

void ClockConfig::setGoal(int g) {

    goal = g;
}












