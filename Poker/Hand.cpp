#include "Hand.h"
#include <iostream>


Hand::Hand()
{
}


Hand::~Hand()
{
}

std::ostream& operator<<(std::ostream& os, const Hand& h)
{
	for (auto c : h._hand)
	{
		os << *c << std::endl;
	}
	return os;
}

void Hand::addCard(CardPtr card)
{
	_hand.push_back(card);
}

void Hand::clear()
{
	_hand.clear();
}

int Hand::size()
{
	return _hand.size();
}

std::string Hand::toString()
{
	std::string hand;
	for (auto e : _hand)
	{
		hand = hand + e->toString() + ", ";
	}
	return hand;
}

bool Hand::isPair()
{
	std::map<Face, int> pairs;
	for (auto e : _hand)
	{
		pairs.insert[e->face]++;
	}

	for (auto i : pairs)
	{
		std::cout << i.first << " " << i.second << std::endl;
	}

	return false;
}
