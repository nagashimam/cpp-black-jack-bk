#include "./all.h"
#include "./deck.h"

int main()
{
    Deck deck = Deck();
    for (int i = 0; i < deck.cards.size(); i++)
    {
        std::cout << deck.cards.at(i)->toString();
        std::cout << "\n";
    }
}