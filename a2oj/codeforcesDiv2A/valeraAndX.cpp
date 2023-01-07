#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    char a[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>a[i][j];

    char ch1 = a[0][0], ch2 = a[0][1];
    
    for(int i = 0; i < n; i++){
        if(a[i][i] != ch1){
            cout<<"NO";
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i][n - i - 1] != ch1){
            cout<<"NO";
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i && j != n - i - 1){
                if(a[i][j] != ch2 || a[i][j] == ch1){
                    cout<<"NO";
                    return 0;
                }                    
            }
        }
    }

    cout<<"YES";


    return 0;
}