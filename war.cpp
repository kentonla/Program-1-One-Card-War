// Name: Kenton La
// CECS 325-01
// Prog 1 - One Card War
// Sep 18, 2024

// I certify that this program is my own original work. I did not copy any part of this program from any other source.
// I further certify that I typed each and every line of code in this program.

#include "card.h"
#include "deck.h"
#include <iostream>
#include <string> 
using namespace std;

int main() {
    Deck Deck;
    string player1;
    string player2;
    cout << "Please enter Player 1's name: ";
    cin >> player1;
    cout << "Please enter Player 2's name: ";
    cin >> player2;
    Deck.print();
    Deck.shuffle();
    Deck.print();
    

}