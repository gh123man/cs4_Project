#include "clockConfig.h"

ClockConfig::ClockConfig(int t = 12): time(t) {
}

bool ClockConfig::validTime(int t) {
    if (t < 13 && t > 0) {
        return true;
    } else {
        reutrn false;    
    }
}

void ClockConfig::plusHr() {
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

void ClockConfig::getTime() {
    return time;
}

bool ClockConfig::final(){

    if (final->getTime() == time) {
        return true;
    } else {
        return false;
    }

}

void ClockConfig::setGoal(ClockConfig *c) {
    final = ClockConfig;
}
