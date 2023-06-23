#include "Utilities.h"
#include <cstdlib>
#include <random>

static int randomInt(int min, int maxInclusive) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(min, maxInclusive);
  return dis(gen);
}

// Return a random door number (1, 2, or 3) not including the excluding optional parameter
int Utilities::RandomDoor(int excluding) {
  int door = excluding;
  while (door == excluding) door = randomInt(1, 3);
  return door;
}

bool Utilities::CoinFlip() {
  return randomInt(0, 1) == 0;
}