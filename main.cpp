#include "./all.h"
#include "./deck.h"

int main()
{
    Deck deck = Deck();
    for (int i = 0; i < deck.cards.size(); i++)
    {
        deck.cards.at(i)->print();
        std::cout << "\n";
    }
}