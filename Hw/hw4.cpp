#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

// Define an array of strings representing card values
string nums[13] = {" A", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10", " J", " Q", " K"};

// Define an array of strings representing card suits
string suits[4] = {"S", "H", "D", "C"};

// Define a Card class to represent a single card
class Card {
public:
    string num; // the card value
    string suit; // the card suit
};

// Function to initialize a deck of cards and return a stack
stack<Card> initializeDeck() {
    stack<Card> deck;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            Card c;
            c.num = nums[j];
            c.suit = suits[i];
            deck.push(c);
        }
    }

    return deck;
}

// Function to shuffle the cards in a stack
void shuffleDeck(stack<Card>& deck) {
    vector<Card> temp;

    // Move the cards from the stack to a vector
    while (!deck.empty()) {
        temp.push_back(deck.top());
        deck.pop();
    }

    // Shuffle the cards in the vector
    srand(time(NULL));
    random_shuffle(temp.begin(), temp.end());

    // Move the cards from the vector back to the stack
    for (int i = 0; i < temp.size(); i++) {
        deck.push(temp[i]);
    }
}

// Function to display the cards in a stack
void displayDeck(stack<Card> deck) {
    // Print column headers
    cout << "Play1" << "  " << "Play2" << "  " << "Play3" << "  " << "Play4" << endl;

    // Loop through the cards and print them
    int i = 0;
    while (!deck.empty()) {
        Card c = deck.top();
        cout << "[" << c.suit << " " << c.num << "]";
        deck.pop();

        // Start a new row every 4 cards
        if (++i % 4 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

// Main function
int main() {
    // Initialize the deck
    stack<Card> deck = initializeDeck();

    // Shuffle the deck
    shuffleDeck(deck);

    // Display the deck
    displayDeck(deck);

    return 0;
}
