#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>

class Deck{
    
    Deck();

    Card deal();

    void print();

    void shuffle();
}

#endif