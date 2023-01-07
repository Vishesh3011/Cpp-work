#include<bits/stdc++.h>

using namespace std;

class Person {
    public:
        string name;
};

class Player : public Person {
        int random;
        void createRandom();

    public:
        int number;
        int score = 0;
        void computeScore();
};

void Player :: computeScore(){
        createRandom();
        if(number == random){
            score++;
        }
}

void Player :: createRandom(){
    random = rand() % 6;
}

int main(){
    Player p1, p2;
    int n;

    cout << "Welcome to NumGuess! Enter the number of games you want to play: ";
    cin >> n;

    cout << "Player 1 please enter your name: ";
    cin >> p1.name;

    cout << "Player 2 please enter your name: ";
    cin >> p2.name;

    for(int i = 0; i < n; i++){
        cout << "Player 1 please enter your number to guess(0 - 5): ";
        cin >> p1.number;

        cout << "Player 2 please enter your number to guess(0 - 5): ";
        cin >> p2.number;

        p1.computeScore();
        p2.computeScore();

        cout << "Player 1 Score: " << p1.score << endl;
        cout << "Player 2 Score: " << p2.score << endl;
    }

    if(p1.score > p2.score)
        cout << p1.name << " is the Winner! Congratulations!";
    else if(p1.score < p2.score)
        cout << p2.name << " is the Winner! Congratulations!";
    else
        cout << "It was a Tie between " << p1.name << " and " << p2.name;

    return 0;
}