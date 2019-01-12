#include "Briscola.h"

Briscola::Briscola(const std::string& one, const std::string& two)
{
	m_giocatori.push_back(HumanPlayer(one));
	m_giocatori.push_back(HumanPlayer(two));

	m_deck.Generate();
}