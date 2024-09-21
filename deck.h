// Name: Kenton La
// CECS 325-01
// Prog 1 - One Card War
// Sep 18, 2024

// I certify that this program is my own original work. I did not copy any part of this program from any other source.
// I further certify that I typed each and every line of code in this program.
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "card.h"
using namespace std;

class Deck{
    private:
        Card pile[52];
        int topCard;
    
    public:
        Deck();
        Card deal();
        void print();
        void shuffle();
};

#endif