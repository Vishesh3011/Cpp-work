#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    char snake[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
        {
            if((i + 1) % 2 == 1)
                snake[i][j] = '#';
            else
                snake[i][j] = '.';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((i + 1) % 2 == 0 && (i + 1) % 4  == 2)
                snake[i][m - 1] = '#';
            else if((i + 1) % 2 == 0 && (i + 1) % 4  == 0)
                snake[i][0] = '#';

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout<<snake[i][j];
        cout<<endl;
    }

    return 0;
}