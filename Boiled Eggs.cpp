#include <iostream>
#include <cmath>

unsigned int cookingTime(unsigned int eggs) {
    // Number of seconds it takes to boil one egg
    unsigned int timePerEgg = 5;

    // Calculate the total time in seconds
    unsigned int totalTime = timePerEgg * std::ceil(static_cast<double>(eggs) / 8.0);

    return totalTime;
}