#include<iostream>

using namespace std;

int main(){
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    float misha = max(3 * a / 10, a - (a / 250) * c);
    float vasya = max(3 * b / 10, b - (b / 250) * d);


    if(misha > vasya)
        cout<<"Misha";
    else if(vasya > misha)
        cout<<"Vasya";
    else    
        cout<<"Tie";

    return 0;
}