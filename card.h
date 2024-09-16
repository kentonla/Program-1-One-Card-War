#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>


class Card{
    Card(char suit, char rank);

    Card();

    void print();

    int compare(Card);
}

#endif