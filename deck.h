#include "all.h"

enum class Suit
{
    Spades,
    Hearts,
    Diamonds,
    Clubs,
};

std::array<Suit, 4> allSuits();
std::string toString(Suit suit);

enum class Rank
{
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Eleven,
    Twelve,
    Thirteen
};

std::array<Rank, 13> allRanks();
std::string toString(Rank rank);

class Card
{
public:
    virtual std::string toString();
};

class Joker : public Card
{
public:
    std::string toString();
};

class PlainCard : public Card
{
    Suit suit;
    Rank rank;

public:
    PlainCard(Suit suit, Rank rank);

public:
    std::string toString();
};

class Deck
{
public:
    std::array<Card *, 54> cards;

public:
    Deck();
};