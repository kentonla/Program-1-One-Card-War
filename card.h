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
        Card(char suit, char rank);

        Card();

        void print();

        int compare(Card);
}

#endif