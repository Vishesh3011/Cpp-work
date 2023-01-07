#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;

    int a[n][2];

    for(int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1];
    }

    int sum = 0;
    int init = 1;

    for(int i = 0; i < n; i++){
        while(init + x <= a[i][0]){
            init += x;
            if(init + x > a[i][0])
                break;
        }
        sum += a[i][1] - init + 1;
        init = a[i][1] + 1;
    }

    cout<<sum;

    return 0;
}