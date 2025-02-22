#ifndef RACE_H_INCLUDED
#define RACE_H_INCLUDED
#include "Horse.h"

class Race {
  private:
    static const int NUM_HORSES = 5;
    const int TRACK_LENGTH;
    Horse horses[NUM_HORSES];
  public:
    Race(int trackLength);
    void run();
    void printRace();

}

#endif
