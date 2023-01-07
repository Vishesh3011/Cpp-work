#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 0){
        cout<<"O-|-OOOO"<<endl;
    }

    while(n != 0){
        int digit = n % 10;
        if(digit == 1)
            cout<<"O-|O-OOO"<<endl;
        else if(digit == 2)
            cout<<"O-|OO-OO"<<endl;
        else if(digit == 3)
            cout<<"O-|OOO-O"<<endl;
        else if(digit == 4)
            cout<<"O-|OOOO-"<<endl;
        else if(digit == 5)
            cout<<"-O|-OOOO"<<endl;
        else if(digit == 6)
            cout<<"-O|O-OOO"<<endl;
        else if(digit == 7)
            cout<<"-O|OO-OO"<<endl;
        else if(digit == 8)
            cout<<"-O|OOO-O"<<endl;
        else if(digit == 9)
            cout<<"-O|OOOO-"<<endl;
        else
            cout<<"O-|-OOOO"<<endl;
        
        n = n / 10;
    }
    return 0;
}