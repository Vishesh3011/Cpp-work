#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n][2];

    int sumUpper = 0;
    int sumLower = 0;

    int count = 0;

    for(int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1];
        sumUpper += a[i][0];
        sumLower += a[i][1];

        if(a[i][0] % 2 != a[i][1] % 2){
            count++;
        }
    }

    if(sumUpper % 2 == 0 && sumLower % 2 == 0){
        cout<<0;
        return 0;
    }
    else if(count % 2 == 0 && count > 0){
        cout<<1;
        return 0;
    }
    else{
        cout<<-1;
        return 0;
    }

    return 0;
}