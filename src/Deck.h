#ifndef Deck_h
#define Deck_h

#include "Card.h"
#include <deque>

class Deck {
public:
	Deck() {}
	void Generate();

	Card PickFirst();

	unsigned short NumberOfCards() { return m_cards.size(); }
private:
	std::deque<Card> m_cards;
};

#endif
