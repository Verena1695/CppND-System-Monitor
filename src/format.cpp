#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    
    float hours_float = seconds / 3600.;
    int hours = (int) hours_float;
    float minutes_float = (hours_float - hours) * 60.;
    int minutes = (int) minutes_float;
    int secs = (int) ((minutes_float - minutes) * 60.);
    string hours_string = std::to_string(hours);
    hours_string = hours_string.insert(0, 2 - hours_string.length(), '0');
    string mins_string = std::to_string(minutes);
    mins_string = mins_string.insert(0, 2 - mins_string.length(), '0');
    string secs_string = std::to_string(secs);
    secs_string = secs_string.insert(0, 2 - secs_string.length(), '0');
    return hours_string + ":" + mins_string + ":" + secs_string; 

    }