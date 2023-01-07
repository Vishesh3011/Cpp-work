#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int distance(int x1, int y1, int x2, int y2){
    return (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
}

int rightAngled(int x1, int y1, int x2, int y2, int x3, int y3){
    if(((x1 == x2) && (y1 == y2)) || ((x1 == x3) && (y1 == y3)) || ((x2 == x3) && (y2 == y3)))
        return 0;
    
    int a = distance(x1, y1, x2, y2);
    int b = distance(x2, y2, x3, y3);
    int c = distance(x1, y1, x3, y3);

    int hypo = max(a, max(b, c));

    if((hypo == a + b) || (hypo == a + c || hypo == b + c)){
        return 1;
    }   
    return 0;
}

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(rightAngled(x1, y1, x2, y2, x3, y3)){
        cout<<"RIGHT";
        return 0;
    }

    if(rightAngled(x1 + 1, y1, x2, y2, x3, y3) == 1 || rightAngled(x1, y1 + 1, x2, y2, x3, y3) == 1 || rightAngled(x1, y1, x2 + 1, y2, x3, y3) == 1 ||
        rightAngled(x1, y1, x2, y2 + 1, x3, y3) == 1 || rightAngled(x1, y1, x2, y2, x3 + 1, y3) == 1 || rightAngled(x1, y1, x2, y2, x3, y3 + 1) == 1 ||
        rightAngled(x1 - 1, y1, x2, y2, x3, y3) == 1 || rightAngled(x1, y1 - 1, x2, y2, x3, y3) == 1 || rightAngled(x1, y1, x2 - 1, y2, x3, y3) == 1 ||
        rightAngled(x1, y1, x2, y2 - 1, x3, y3) == 1 || rightAngled(x1, y1, x2, y2, x3 - 1, y3) == 1 || rightAngled(x1, y1, x2, y2, x3, y3 - 1) == 1)
        cout<<"ALMOST";
    else
        cout<<"NEITHER";
    

    return 0;
}