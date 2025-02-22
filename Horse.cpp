#include "Horse.h"
#include <iostream>
#include <ctime>

std::random_device rd;
std::uniform_int_distribution<int> Horse::dist(0,1);


void Horse::init(int idx, trackLen) {
    index = idx;
    trackLength = trackLen;
    position = 0;
}

void Horse::advance() {
    position += dist(rd);
}

void Horse::printLine() {
    for (int i = 0; i < trackLength; i++) {
        if (i == position) 
          std::cout << index;
        else
          std::cout << "."
    }
    std::cout << "\n";
}

bool Horse::isWinner() {
    return position >= trackLength;
}

int Horse::getPosition() const {
    return position;
}