#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int p, q;

    int count[n + 1];

    for(int i = 0; i < n + 1; i++)
        count[i] = 0;

    cin>>p;

    int x[p];

    for(int i = 0; i < p; i++){
        cin>>x[i];
        count[x[i]]++;
    }
        
    cin>>q;

    int y[q];

    for(int i = 0; i < q; i++){
        cin>>y[i];
        if(count[y[i]] != 1)
            count[y[i]]++;
    }

    int sum = 0;

    for(int i = 1; i < n + 1; i++){
        sum += count[i];
    }

    if(sum == n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}