#ifndef Player_h
#define Player_h

#include <string>
#include <vector>

class Player
{
public:
	Player(const std::string& name): m_name(name) {}
	virtual ~Player() {}
	std::string Name() const { return m_name; }

	virtual Card PlayRound(const unsigned short) = 0;
	const std::vector<Card>& Cards() const { return m_held; }
private:
	std::string m_name;
protected:
	std::vector<Card> m_held;
};

#endif