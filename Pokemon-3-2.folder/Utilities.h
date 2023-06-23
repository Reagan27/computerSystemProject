#ifndef _UTILITIES_H_
#define _UTILITIES_H_

class Utilities {
public:
  // Return a random door number: 1, 2 or 3. The optional argument,
  // excluding, specifies a door to exclude from the random choice.
  static int RandomDoor(int excluding = 0);
  // Return a bool that is true 50% of the time.
  static bool CoinFlip();
};

#endif