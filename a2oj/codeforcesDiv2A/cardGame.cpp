#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string trump, firstCard, secondCard;

    char card[9] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

    cin>>trump>>firstCard>>secondCard;

    if(firstCard[1] == trump[0] && secondCard[1] != trump[0])
        cout<<"YES";
    else if(firstCard[1] == secondCard[1]){
        int posDiff = find(card, card + 9, firstCard[0]) - find(card, card + 9, secondCard[0]);
        if(posDiff > 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}