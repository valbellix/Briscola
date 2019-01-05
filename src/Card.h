#ifndef Card_h
#define Card_h

class Card
{
public:
	Card(const std::string& seed, const std::string& value): m_seed(seed), m_value(value)
	{}

	virtual ~Card() {}

	virtual std::string Type() const = 0;

	std::string Seed() const { return m_seed; }
	std::string Value() const { return m_value; }
protected:
	std::string m_seed;
	std::string m_value;
};

#endif