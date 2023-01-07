//doubt
#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    char a[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>a[i][j];

    int successful = 0;

    for(int i = 0; i < n; i++){
        bool wasBest = false;
        for(int j = 0; j < m; j++){
            bool isBest = true;
            for(int k = 0; k < n; k++){
                if(a[k][j] > a[i][j])
                    isBest = false;
            }
            if(isBest)
                wasBest = true;
        }
        if(wasBest)
            successful++;
    }

    cout<<successful;

    return 0;
}