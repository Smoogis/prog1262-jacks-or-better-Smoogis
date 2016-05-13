#pragma once
#include <string>
#include <set>
#include <map>
#include <iostream>
#include "Deck.h"

enum class Suit { CLUB, DIAMOND, HEART, SPADE };
enum class Face { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

struct Card
{
	Card(Face f, Suit s) : suit(s), face(f) {}
	const Suit suit;
	const Face face;

	std::string toString() const;
	friend bool operator<(const Card& l, const Card& o);
	friend std::ostream& operator<<(std::ostream& os, const Card& c);


	//class members
	static const std::set<Suit> suits;
	static const std::set<Face> faces;

	static const std::map<Face, std::string> faceNames;
	static const std::map<Suit, std::string> suitNames;
};