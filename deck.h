#include "all.h"

enum class Suit
{
    Spades,
    Hearts,
    Diamonds,
    Clubs,
};

std::array<Suit, 4> allSuits();
std::string suitValue(Suit suit);

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
std::string rankValue(Rank rank);

class Card
{
public:
    virtual void print() {}
};

class Joker : public Card
{
public:
    void print();
};

class PlainCard : public Card
{
    Suit suit;
    Rank rank;

public:
    PlainCard(Suit suit, Rank rank);

public:
    void print();
};

class Deck
{
public:
    std::array<Card *, 54> cards;

public:
    Deck();
};