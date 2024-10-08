#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <chrono>
#include <string>

using Time = std::chrono::steady_clock;
using ms = std::chrono::milliseconds;

void tick();

std::string time_string();

#endif