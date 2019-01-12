#ifndef Briscola_h
#define Briscola_h

class Briscola
{
public:
	Briscola(const std::string& one, const std::string& two);
	void PlayRound();
private:
	Deck m_mazzo;
	Card::SeedType m_seme;

	std::vector<Player> m_giocatori;
};

#endif