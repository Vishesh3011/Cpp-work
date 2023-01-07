#include<iostream>

using namespace std;
const int N =1e6+1;
int counter[N];
void sol(){
    int n;
    cin>>n;

    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];

    for(int i = 0; i < N; i++)
        counter[i] = 0;

    for(int i = 0; i < n; i++){
        counter[array[i]]++;
    }

    for(int i = 0; i < N; i++){
        if(counter[i] > 1)
            cout<<i<<" ";
    }
}

int main(){
    sol();
    return 0;
}