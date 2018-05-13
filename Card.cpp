#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"

using namespace std;

Card::Card(rank r, suit s, bool ifu): m_Rank(r), m_Suits(s), m_IsFaceUp(ifu){}

int Card::GetValue() const{
	
	int value = 0;
	if (m_IsFaceUp){
		value = m_Rank;
		if (value > 10){
			value = 10;	
		}
	}
	return value;
}

void Card::Flip(){
	m_IsFaceUp = !(m_IsFaceUp);
}
