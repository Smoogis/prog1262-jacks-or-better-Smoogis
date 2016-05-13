#include "Deck.h"
#include "Card.h"
#include <ctime>
#include <iostream>
#include <algorithm>

Deck::Deck()
{
	srand(static_cast<unsigned int>(time(0)));
	for (auto f : Card::faces)
	{
		for (auto s : Card::suits)
			_deck.push_back(std::make_shared<Card>(f, s));
	}
	_topOfDeck = static_cast<int>(_deck.size() - 1);
}

Deck::~Deck()
{
}

CardPtr Deck::dealOneCard()
{
	return _deck.at(_topOfDeck--);
	
}

bool Deck::isEmpty()
{
	return (_deck.size() < 0);
}

void Deck::sort()
{
	//std::sort(_deck.begin(), _deck.end(), [](CardPtr rhs, CardPtr lhs)(return(*lhs < *rhs););
}

CardPtr Deck::cut()
{
	return _deck[rand() % _deck.size()];
}

void Deck::shuffle()
{
	for (int i = 0; i < _deck.size(); i++)
	{
		std::swap(_deck[i], _deck[i + (rand() % _deck.size()) - i]);
	}
	_topOfDeck = static_cast<int>(_deck.size() - 1);
}