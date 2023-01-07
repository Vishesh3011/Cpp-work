#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    char array[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(array[i][j] == '.'){
                if((i + j) % 2 == 0)
                    array[i][j] = 'B';
                else
                    array[i][j] = 'W';
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }

    return 0;
}
