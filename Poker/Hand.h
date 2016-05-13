#pragma once
#include <string>
#include <vector>
#include "Deck.h"
class Hand
{
public:
	Hand();
	~Hand();

	void addCard(CardPtr card);
	void clear();
	int size();
	friend std::ostream& operator<<(std::ostream& os, const Hand& h);
	std::string toString();
	bool isPair();
	bool isThreeOfAKind();
	bool isFourOfAKind();
	bool isFullHouse();
	bool isTwoPair();

private:
	std::vector<CardPtr> _hand;
};

std::ostream& operator<<(std::ostream& os, const Hand& h);


