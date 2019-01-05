#ifndef Deck_h
#define Deck_h

#include "Card.h"

class Deck {
public:
	virtual ~Deck() {}
private:
	std::vector<Card> m_cards;
};

#endif
