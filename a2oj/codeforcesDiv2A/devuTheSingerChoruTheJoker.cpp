#include<iostream>

using namespace std;

int main(){
    int n, d;
    cin>>n>>d;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += array[i];
    }

    int time = sum + 10 * (n - 1);

    if(time <= d)
        cout<<(d - sum) / 5;
    else
        cout<<-1; 

    return 0;
}