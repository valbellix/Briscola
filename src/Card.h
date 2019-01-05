#ifndef Card_h
#define Card_h

#include <string>
#include <vector>

class Card
{
public:
	enum SeedType { SPADE, COPPE, DENARI, BASTONI };
	enum CardValue { UNO = 1, DUE, TRE, QUATTRO, CINQUE, SEI, SETTE, OTTO, NOVE, DIECI };

	static const std::vector<Card>& AllCards() { return m_allCards; }

	bool operator==(const Card& other) const
	{
		return (m_seed == other.m_seed) && (m_value == other.m_value);
	}

	bool operator!=(const Card& other) const
	{
		return !(*this == other);
	}

	std::string ToString() const;

	SeedType Seed() const { return m_seed; }
	CardValue Value() const { return m_value; }
	unsigned short int NumericValue() const { return static_cast<unsigned short int>(m_value); }
private:
	Card(const SeedType seed, const CardValue value): m_seed(seed), m_value(value)
	{}

	SeedType m_seed;
	CardValue m_value;

	static const std::vector<Card> m_allCards;
};

#endif