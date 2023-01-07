#include<iostream>

using namespace std;

int main(){
    int n, x, y;
    cin>>n;

    int a[101][101] = {0};

    for(int i = 0; i < n; i++){
        cin>>x>>y;
        a[x][y] = 1;
    }

    int countCol = 0, countRow = 0;

    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            if(a[i][j] == 1){
                countRow++;
                break;
            }
        }
    }

    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            if(a[j][i] == 1){
                countCol++;
                break;
            }
        }
    }

    if(countRow > countCol)
        cout<<countCol;
    else
        cout<<countRow;

    return 0;
}

