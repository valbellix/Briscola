#ifndef HumanPlayer_h
#define HumanPlayer_h

#include "Player.h"

class HumanPlayer : public Player
{
public:
	HumanPlayer(const std::string& name): Player(name) {}

	Card PlayRound(const unsigned short);
};

#endif
