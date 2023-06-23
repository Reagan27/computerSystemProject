#ifndef _POKEPLAYER_H_
#define _POKEPLAYER_H_

#include "pokemon.h"
#include <string>
using namespace std;

/*****************************************************************************
Declare the Pokeplayer, a public subclass of Pokemon

Add a constructor that calls the Pokemon constructor.

Add declarations of three methods which can be overridden by subclasses:

A method, strategyName that takes no parameters and returns a short string
describing the pokemon's strategy.

A method, decideDoor, that takes no parameters and returns an int (1, 2, or 3)
which is the door this pokemon initially chooses.

A method, decideSwitch, which takes three parameters:
  int chosenDoor    // the door the pokemon initially chose
  int revealedDoor  // the door which was revealed to be a zonk
  int offerDoor     // the door which remains unopened
This method should return an int (1, 2, or 3) which is the door
the pokemon wishes to continue with. I.e. it would return chosenDoor
to stick with their initial choice or offerDoor to switch.
The Pokeplayer class should make this decision randomly, with a
50-50 probabilty to switch or stick.

*****************************************************************************/


/*****************************************************************************
// Here, declare a public subclass of Pokeplayer called StubbornPlayer.
// It may override any or all of the methods defined in the base class.

// Implement a constructor that takes values for all of the pokemon
// attributes. All it must do is call the Pokeplayer's constructor.

// Stubborn pokemon's don't change their minds after they've made an initial
// guess.
*****************************************************************************/


/*****************************************************************************
// Here, declare a public subclass of Pokeplayer called ShrewdPlayer.
// It may override any or all of the methods defined in the base class.

// Implement a constructor that takes values for all of the pokemon
// attributes. All it must do is call the Pokeplayer's constructor.

// Shrewd pokemon's are coded with an understanding of the ideal strategy
// to play the Monty Hall game.
*****************************************************************************/

#endif