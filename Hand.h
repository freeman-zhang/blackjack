#include <vector>
class Hand{
public: 
	Hand();
	virtual ~Hand();

	void add(Card* pCard);

	void clear();

	int getTotal() const;

protected:
	vector<Card*> m_Cards;

};
