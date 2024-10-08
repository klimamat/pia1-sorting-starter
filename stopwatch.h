#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <chrono>
#include <string>

using Time = std::chrono::steady_clock;
using ms = std::chrono::milliseconds;

// Saves the current and previous measured timestamp
void tick();

// Outputs formatted string with current measured time interval in [ms]
std::string time_string();

#endif