#include <iostream>
#include <string>
#include "card.h"
using namespace std;

// default Card needed for array
Card::Card(){}

// constructor to create a card, setting the suit and rank
Card::Card(char r, char s){
    rank = r;
    suit = s;
}

// display the card example: AC, 10S, KD
void Card::print(){
    switch (rank) {
        case 'A':
            cout << 'A';
            break;
        case '2':
            cout << '2';
            break;
        case '3':
            cout << '3';
            break;
        case '4':
            cout << '4';
            break;
        case '5':
            cout << '5';
            break;
        case '6':
            cout <<'6';
            break;
        case '7':
            cout << '7';
            break;
        case '8':
            cout <<'8';
            break;
        case '9':
            cout << '9';
            break;
        case 'T':
            cout << "10";
            break;
        case 'J':
            cout << 'J';
            break;
        case 'Q':
            cout <<'Q';
            break;
        case 'K':
            cout << 'K';
            break;
    }
    switch (suit) {
        case 'H':
            cout << 'H';
            break;
        case 'D':
            cout << 'D';
            break;
        case 'C':
            cout << 'C';
            break;
        case 'S':
            cout << 'S';
            break;
    }
}

// return 1 for win, 0 for tie, -1 for lose
int Card::compare(Card other){
    if (rank > other.rank) return 1;
    if (rank < other.rank) return -1;
    return 0;
}