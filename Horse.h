#ifndef HORSE_H_INCLUDED
#define HORSE_H_INCLUDED

#include <iostream>
#include <random>

class Horse {
  private:
    int position, trackLength, index;
    static std::random_device rd;
    static std::uniform_int_distribution<int> dist;
  public:
    Horse()
    void init(int index, int trackLength);
    void advance();
    void printLine();
    bool isWinner();
    int getPosition() const;
  }
#endif
