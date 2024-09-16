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
    Deck myDeck;  // creates new deck
    string player1;
    string player2;
    cout << "Please enter Player 1's name: ";
    cin >> player1;
    cout << "Please enter Player 2's name: ";
    cin >> player2;
    myDeck.print();       //Display unshuffeled deck
    myDeck.shuffle();     //Shuffle the deck
    myDeck.print();       //Display shuffled deck
    
    //Play 26 games
    //Anounce the winner (or tie) of EACH game
    //After 26 games are played, print the statistics

}