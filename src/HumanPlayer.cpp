#include "HumanPlayer.h"
#include "Exceptions.h"

Card HumanPlayer::PlayRound(const unsigned short card)
{
	if (card < m_held.size())
	{
		Card c(m_held[card]);
		m_held.erase(m_held.begin() + card);

		return c;
	}
	else
	{
		throw WrongChoiceException();
	}
}