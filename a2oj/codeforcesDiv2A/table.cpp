#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    bool key = 0;

    int a[n + 1][m + 1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                if(i == 1 || j == 1 || i == n || j == m)
                    key = 1;
            }
        }
    }

    if(key)
        cout<<2;
    else
        cout<<4;

    return 0;
}