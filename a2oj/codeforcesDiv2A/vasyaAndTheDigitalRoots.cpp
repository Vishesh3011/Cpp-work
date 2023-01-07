#include<iostream>

using namespace std;

int main(){
    int k, d;
    cin>>k>>d;

    
    if(k == 0 || d > 9){
        cout<<"No solution"<<endl;
        return 0;
    }
    
    if(d == 0 && k > 1){
        cout<<"No solution"<<endl;
        return 0;
    }

    for(int i = k; i > 1; i--)
        cout<<"9";
    cout<<d;

    return 0;
}