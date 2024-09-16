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
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
    Deck myDeck;  // creates new deck
    string player1;
    string player2;
    srand(time(0));       //Changes seed of rand() to be used in shuffle()
    cout << "Please enter Player 1's name: ";
    cin >> player1;
    cout << "Please enter Player 2's name: ";
    cin >> player2;
    cout << endl << "Unshuffled deck:" << endl;
    myDeck.print();       //Display unshuffeled deck
    myDeck.shuffle();     //Shuffle the deck
    cout << "Shuffeled deck:" << endl;
    myDeck.print();       //Display shuffled deck
    
    //stat tracker
    int p1_wins = 0;
    int p2_wins = 0;
    int ties = 0;

    //Play 26 games
    for (int i = 0; i < 26; i++){
        cout << "Round " << i + 1 << ":\t";
        Card p1_card = myDeck.deal();
        Card p2_card = myDeck.deal();
        int result = p1_card.compare(p2_card);
        //Anounce the winner (or tie) of EACH game
        if (result == 1) {
            cout << player1 << " draws a ";
            p1_card.print();
            cout << " | " << player2 << " draws a ";
            p2_card.print();
            cout << "\t|\t" << player1 << " wins this round!" << endl;
            p1_wins++;
        } else if (result == -1) {
            cout << player1 << " draws a ";
            p1_card.print();
            cout << " | " << player2 << " draws a ";
            p2_card.print();
            cout << "\t|\t" << player2 << " wins this round!" << endl;
            p2_wins++;
        } else {
            cout << player1 << " draws a ";
            p1_card.print();
            cout << " | " << player2 << " draws a ";
            p2_card.print();
            cout << "\t|\t" << "This round is a tie!" << endl;
            ties++;
        }
    }

    //After 26 games are played, print the statistics
    cout << endl << "The game has ended!" << endl;
    cout << player1 << " won " << p1_wins << " rounds." << endl;
    cout << player2 << " won " << p2_wins << " rounds." << endl;
    cout << "There were " << ties << " ties." << endl;

    return 0;
}