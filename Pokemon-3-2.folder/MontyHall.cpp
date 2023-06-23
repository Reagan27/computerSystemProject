#include "MontyHall.h"
#include "Utilities.h"

MontyHall::MontyHall(Pokeplayer *pokemon) {
  _pokemon = pokemon;
  _score = 0;
  _gameCount = 0;
}

void MontyHall::playNGames(int gameCount) {
  setGameCount(gameCount);
  for (int game = 0; game < gameCount; ++game) {
    if (playOneGame())
      incrementScore();
  }
}

double MontyHall::winPercentage() const {
  return (gameCount() > 0) ? 1.0 * score() / gameCount() : 0.0;
}

// Play a single Monty Hall game with Monty's pokemon player.
// 1) Select the winning door at random, request the player's initial choice,
// 2) Compute the door to reveal, and provide the player an opportunity to
//    update their choice.
// 3) Return true if the player's chosen door is the prize door.
bool MontyHall::playOneGame() {
  static const int doorSum = 1 + 2 + 3;

  int prizeDoor = Utilities::RandomDoor();
  int chosenDoor = _pokemon->decideDoor();
  int revealedDoor;

  if (chosenDoor == prizeDoor) {
    revealedDoor = Utilities::RandomDoor(prizeDoor);
  } else {
    revealedDoor = doorSum - chosenDoor - prizeDoor;
  }
  int offerDoor = doorSum - revealedDoor - chosenDoor;
  chosenDoor = _pokemon->decideSwitch(chosenDoor, revealedDoor, offerDoor);

  return chosenDoor == prizeDoor;
}
