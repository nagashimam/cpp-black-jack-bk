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
std::string toString(Suit suit)
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

std::string toString(Rank rank)
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

/* #region Card */
Card::Card(Suit suit, Rank rank)
{
    Card::suit = suit;
    Card::rank = rank;
}
std::string Card::toString()
{
    return ::toString(Card::suit) + "/" + ::toString(Card::rank);
}
/* #endregion */

/* #region Deck */
Deck::Deck()
{
    std::array<Suit, 4> suits = allSuits();
    std::array<Rank, 13> ranks = allRanks();
    for (int si = 0; si < suits.size(); si++)
    {
        for (int ri = 0; ri < ranks.size(); ri++)
        {
            Deck::cards.push_back(new Card(suits.at(si), ranks.at(ri)));
        }
    }
}

int Deck::generateRamdomCardIndex()
{
    int max = Deck::cards.size() - 1;
    std::random_device random;
    std::mt19937 mt(random());
    std::uniform_int_distribution<> randomDistribution(0, max);
    return randomDistribution(mt);
}

Card *Deck::draw()
{
    int randomCardIndex = generateRamdomCardIndex();
    Card *pNextCard = Deck::cards.at(randomCardIndex);
    Deck::cards.erase(Deck::cards.begin() + randomCardIndex);
    return pNextCard;
}
/* #endregion */
