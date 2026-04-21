#include "Hand.hpp"
#include "Deck.hpp"

// Initialize static variable
int Hand::hands_dealt = 0;

Hand::Hand(Deck& deck) {
    for (int i = 0; deck.moreCards() && i < 5; i++) {
        hand.push_back(deck.dealCard());
    }
    hands_dealt++;
}
