#include <iostream>
class GenericPlayer: public Hand{
	friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

public:
	GenericPlayer(const string& name = "");

	virtual ~GenericPlayer();

	virtual bool isHitting() const = 0;

	bool isBusted() const;

	void Bust() const;
};
