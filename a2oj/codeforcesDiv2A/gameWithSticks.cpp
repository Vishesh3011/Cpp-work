#include<iostream>

using namespace std;

int main(){
    int n ,m;
    cin>>n>>m;

    int minEle = min(n , m);

    if(minEle % 2 == 0)
        cout<<"Malvika";
    else
        cout<<"Akshat";

    return 0;
}