#include<iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    bool test[3001];
    for(int i = 1; i <= 3001; i++)
        test[i] = false;

    int a;

    for(int i = 0; i < n; i++){
        cin>>a;
        test[a] = true;
    }

    for(int i = 1; i <= n + 1; i++){
        if(test[i] == false){
            cout<<i;
            return 0;
        }
    }

    return 0;
}