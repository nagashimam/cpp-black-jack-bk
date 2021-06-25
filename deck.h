#include "all.h"

enum Suit
{
    Diamonds,
    Hearts,
    Clubs,
    Spades
};

enum Rank
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

struct Card
{
};

struct Joker : public Card
{
};

struct PlainCard : public Card
{
    Suit suit;
    Rank rank;
};

struct Deck
{
    std::array<Card, 54> cards;
};