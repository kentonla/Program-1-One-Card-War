// Name: Kenton La
// CECS 325-01
// Prog 1 - One Card War
// Sep 18, 2024

// I certify that this program is my own original work. I did not copy any part of this program from any other source.
// I further certify that I typed each and every line of code in this program.
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;


class Card{
    private:
        char rank;
        char suit;

    public:
        Card();

        Card(char rank, char suit);

        void print();

        int compare(Card);
};

#endif