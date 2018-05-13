#include <iostream>
class Game{
public:
	Game(const vector<string>& names);
	~Game();

	void play();
private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;

};
