#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin>>x1>>y1>>x2>>y2;

    int d;

    if(x1 == x2){
        d = abs(y2 - y1);
        cout<<x1 + d<<" "<<y1<<" "<<x2 + d<<" "<<y2;
    }
    else if(y1 == y2){
        d = abs(x2 - x1);
        cout<<x1<<" "<<y1 + d<<" "<<x2<<" "<<y2 + d;
    }
    else if(abs(x2 - x1) == abs(y2 - y1))
        cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
    else
        cout<<-1;

    return 0;
}