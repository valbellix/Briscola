#include <iostream>
#include "Card.h"
#include "Deck.h"

int main()
{
	Deck deck;
	deck.Generate();

	do
	{
		std::cout << deck.PickFirst().ToString() << std::endl;
	} while (deck.NumberOfCards() > 0);

	return 0;
}