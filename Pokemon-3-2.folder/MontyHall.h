#ifndef _MONTYHALL_H_
#define _MONTYHALL_H_

#include "pokeplayer.h"

class MontyHall {
public:
  // Create a MontyHall instance given an instance of a Pokemon who will
  // compete in Monty's game
  MontyHall(Pokeplayer *pokemon);

  // Return the number of times Monty's pokemon has won the game
  int score() const { return _score; }
  // Return the number of games that Monty's pokemon has played
  int gameCount() const { return _gameCount; }
  // Return the ratio of games won to games played
  double winPercentage() const;

  // Play gameCount games with Monty's pokemon
  void playNGames(int gameCount);

private:
  Pokeplayer *_pokemon;
  int _score;
  int _gameCount;

  void incrementScore() { _score++; }
  void setGameCount(int gameCount) { _gameCount = gameCount; }

  bool playOneGame();
};

#endif