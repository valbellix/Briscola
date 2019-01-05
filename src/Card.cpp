#include "Card.h"

static std::string ValueToString(const Card::CardValue value)
{
	switch (value)
	{
	case Card::UNO: return "Uno";
	case Card::DUE: return "Due";
	case Card::TRE: return "Tre";
	case Card::QUATTRO: return "Quattro";
	case Card::CINQUE: return "Cinque";
	case Card::SEI: return "Sei";
	case Card::SETTE: return "Sette";
	case Card::OTTO: return "Otto";
	case Card::NOVE: return "Nove";
	case Card::DIECI: return "Dieci";
	default: return "";
	}
}

static std::string SeedToString(const Card::SeedType seed)
{
	switch (seed)
	{
	case Card::SPADE: return "Spade";
	case Card::COPPE: return "Coppe";
	case Card::DENARI: return "Denari";
	case Card::BASTONI: return "Bastoni";
	default: return "";
	}
}

std::string Card::ToString() const
{
	return ValueToString(m_value) + " di " + SeedToString(m_seed);
}

const std::vector<Card> Card::m_allCards(
	{
	    Card(SPADE, UNO),
	    Card(SPADE, DUE),
	    Card(SPADE, TRE),
	    Card(SPADE, QUATTRO),
	    Card(SPADE, CINQUE),
	    Card(SPADE, SEI),
	    Card(SPADE, SETTE),
	    Card(SPADE, OTTO),
	    Card(SPADE, NOVE),
	    Card(SPADE, DIECI),

	    Card(COPPE, UNO),
	    Card(COPPE, DUE),
	    Card(COPPE, TRE),
	    Card(COPPE, QUATTRO),
	    Card(COPPE, CINQUE),
	    Card(COPPE, SEI),
	    Card(COPPE, SETTE),
	    Card(COPPE, OTTO),
	    Card(COPPE, NOVE),
	    Card(COPPE, DIECI),

	    Card(DENARI, UNO),
	    Card(DENARI, DUE),
	    Card(DENARI, TRE),
	    Card(DENARI, QUATTRO),
	    Card(DENARI, CINQUE),
	    Card(DENARI, SEI),
	    Card(DENARI, SETTE),
	    Card(DENARI, OTTO),
	    Card(DENARI, NOVE),
	    Card(DENARI, DIECI),

	    Card(BASTONI, UNO),
	    Card(BASTONI, DUE),
	    Card(BASTONI, TRE),
	    Card(BASTONI, QUATTRO),
	    Card(BASTONI, CINQUE),
	    Card(BASTONI, SEI),
	    Card(BASTONI, SETTE),
	    Card(BASTONI, OTTO),
	    Card(BASTONI, NOVE),
	    Card(BASTONI, DIECI)
	}
);
