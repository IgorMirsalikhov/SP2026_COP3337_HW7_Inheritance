#include "Card.hpp"
#include "Deck.hpp"
#include "Hand.hpp"

#include <iostream>
#include <fstream>

void print_winner(Hand& h1, Hand& h2);

int main(void) {
    std::ifstream in;
    in.open("p2/test.txt");

    // Create the deck and two hands   
    Deck d(1);
    Hand h1(d);
    Hand h2(d);

    // Scan the test file and test different hands
    std::vector<Card> cards1;
    std::vector<Card> cards2;
    int suit, face;
    int cards_scanned = 0;
    while (in >> suit >> face) {
        if (cards_scanned < 5) {
            cards1.push_back(Card(suit, face));
        }
        else if (cards_scanned < 10) {
            cards2.push_back(Card(suit, face));
        }
        cards_scanned++;
        if (cards_scanned % 10 == 0) {
            cards_scanned = 0;
            h1.setHand(cards1);
            h2.setHand(cards2);
            h1.printHand();
            h2.printHand();
            print_winner(h1, h2);
            std::cout << "-------------------------\n";
            cards1.clear();
            cards2.clear();
        }
    }
    
    in.close();

    return 0;
}
