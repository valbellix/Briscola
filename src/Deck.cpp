#include "Deck.h"

#include <climits>
#include <random>

void Deck::Generate()
{
	std::vector<Card> allCards(Card::AllCards());

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<float> dist(0.0, INT_MAX);

	do
	{
		size_t cardsToInsert = allCards.size();
		auto rnd = abs(dist(mt)) % cardsToInsert;

		m_cards.push_back(allCards[rnd]);
		allCards.erase(allCards.begin() + rnd);
	} while (!allCards.empty());
}

Card Deck::PickFirst()
{
	Card card(m_cards.front());

	m_cards.pop_front();

	return card;
}