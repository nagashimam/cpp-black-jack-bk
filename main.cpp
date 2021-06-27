#include "./all.h"
#include "./deck.h"

int main()
{
    Deck deck = Deck();
    while (!deck.cards.empty())
    {
        std::cout << deck.draw()->toString();
        std::cout << "\n";
    }
}