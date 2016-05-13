#pragma once
#include <vector>
#include <memory>
#include "Card.h"

struct Card;
using CardPtr = std::shared_ptr<Card>;

class Deck
{
public:
	Deck();
	~Deck();
	CardPtr dealOneCard();
	bool isEmpty();
	void sort();
	CardPtr cut();
	void shuffle();

private:
	std::vector<CardPtr> _deck;
	int _topOfDeck;
};

