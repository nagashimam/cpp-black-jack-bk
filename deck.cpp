#include "deck.h"

/* #region Suit */
std::array<Suit, 4> allSuits()
{
    return {
        Suit::Spades,
        Suit::Hearts,
        Suit::Diamonds,
        Suit::Clubs,
    };
}
std::string suitValue(Suit suit)
{
    switch (suit)
    {
    case Suit::Spades:
        return "Spades";
    case Suit::Hearts:
        return "Hearts";
    case Suit::Diamonds:
        return "Diamonds";
    case Suit::Clubs:
        return "Clubs";
    default:
        break;
    }
}
/* #endregion */

/* #region Rank */
std::array<Rank, 13> allRanks()
{
    return {
        Rank::One,
        Rank::Two,
        Rank::Three,
        Rank::Four,
        Rank::Five,
        Rank::Six,
        Rank::Seven,
        Rank::Eight,
        Rank::Nine,
        Rank::Ten,
        Rank::Eleven,
        Rank::Twelve,
        Rank::Thirteen,
    };
}

std::string rankValue(Rank rank)
{
    switch (rank)
    {
    case Rank::One:
        return "One";
    case Rank::Two:
        return "Two";
    case Rank::Three:
        return "Three";
    case Rank::Four:
        return "Four";
    case Rank::Five:
        return "Five";
    case Rank::Six:
        return "Six";
    case Rank::Seven:
        return "Seven";
    case Rank::Eight:
        return "Eight";
    case Rank::Nine:
        return "Nine";
    case Rank::Ten:
        return "Ten";
    case Rank::Eleven:
        return "Eleven";
    case Rank::Twelve:
        return "Twelve";
    case Rank::Thirteen:
        return "Thirteen";
    default:
        break;
    }
}
/* #endregion */

PlainCard::PlainCard(Suit suit, Rank rank)
{
    PlainCard::suit = suit;
    PlainCard::rank = rank;
}
void PlainCard::print()
{
    std::cout << suitValue(PlainCard::suit) << "/" << rankValue(PlainCard::rank);
}

void Joker::print()
{
    std::cout << "Joker";
}

Deck::Deck()
{
    std::array<Suit, 4> suits = allSuits();
    std::array<Rank, 13> ranks = allRanks();
    std::size_t di = 0;
    for (int si = 0; si < suits.size(); si++)
    {
        for (int ri = 0; ri < ranks.size(); ri++)
        {
            Deck::cards.at(di) = new PlainCard(suits.at(si), ranks.at(ri));
            di++;
        }
    }
    Deck::cards.at(di) = new Joker();
    di++;
    Deck::cards.at(di) = new Joker();
}
