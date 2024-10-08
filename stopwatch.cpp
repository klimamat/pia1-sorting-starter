#include "stopwatch.h"

Time::time_point t1, t2;

void tick() {
    auto time = Time::now();
    t1 = t2;
    t2 = time;
}

std::string time_string() {
    const auto diff = std::chrono::duration_cast<ms>(t2 - t1).count();
    return std::to_string(diff) + " ms";
}