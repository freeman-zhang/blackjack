class Card{
public:
	enum rank{ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	enum suit {DIAMONDS, CLUBS, HEARTS, SPADES};

	friend ostream& operator<<(ostream& os, const Card& aCard);

	Card(rank r = ACE, suit s = SPADES, bool ifu = true);

	int getValue() const;

	void flip();

private:
	rank m_Rank;
	suit m_suit;
	bool m_IsFaceUp;
};
