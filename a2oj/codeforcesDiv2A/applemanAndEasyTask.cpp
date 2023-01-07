#include<iostream>

using namespace std;

int n;
int a[100][100];

int _check(){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
           if (a[i][j]%2 != 0)  
            return 0;
    return 1;
}

int main(){
    
    cin>>n;

    char array[n][n];

    int flag = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[i + 1][j] == 'o')
                a[i][j]++;
            if(array[i - 1][j] == 'o' && (i - 1) >= 0)
                a[i][j]++;
            if(array[i][j + 1] == 'o')
                a[i][j]++;
            if(array[i][j - 1] == 'o' && (j - 1) >= 0)
                a[i][j]++;
        }
    }

    
    if (_check()) 
        cout <<"YES";
    else 
        cout <<"NO";
    return 0;
}