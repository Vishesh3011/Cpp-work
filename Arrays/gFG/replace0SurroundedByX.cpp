#include<bits/stdc++.h>

using namespace std;

#define m 6
#define n 6

void floodFill(char arr[][n], int i, int j, char prevChar, char replace){
    if(i < 0 || i >= m || j < 0 || j >= n || arr[i][j] != prevChar)
        return;

    arr[i][j] = replace;
    
    floodFill(arr, i + 1, j, prevChar, replace);
    floodFill(arr, i - 1, j, prevChar, replace);
    floodFill(arr, i, j + 1, prevChar, replace);
    floodFill(arr, i, j - 1, prevChar, replace);
}

void replaceSurroundedByX(char arr[][n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'O')
                arr[i][j] = '-';
        }
    }

    for(int i = 0; i < m; i++){
        if(arr[i][0] == '-')
            floodFill(arr, i, 0, '-', 'O');
    }
    for(int i = 0; i < m; i++){
        if(arr[i][n - 1] == '-')
            floodFill(arr, i, n - 1, '-', 'O');
    }
    for(int i = 0; i < n; i++){
        if(arr[0][i] == '-')
            floodFill(arr, 0, i, '-', 'O');
    }
    for(int i = 0; i < n; i++){
        if(arr[m - 1][i] == '-')
            floodFill(arr, m - 1, i, '-', 'O');
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == '-')
                arr[i][j] = 'O';
        }
        cout << endl;
    }
}

int main(){
    char arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    replaceSurroundedByX(arr);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}