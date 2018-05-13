class Player: public GenericPlayer{
public:
	Player(const string& name = "");
	virtual ~Player();
	
	virtual bool isHitting() const;

	void win() const;
	
	void lose() const;
	
	void push() const;

};
