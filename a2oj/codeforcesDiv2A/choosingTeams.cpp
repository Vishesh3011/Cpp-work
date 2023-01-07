#include<iostream>
 
using namespace std;
 
int main(){
    int r, c;
    cin>>r>>c;
 
    char a[r][c];
 
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin>>a[i][j];
        }
    }
 
    int sum = 0;
    int count = 0;
 
    for(int i = 1; i <= r; i++){
        int j = 1;
        for(j = 1; j <= c; j++)
            if(a[i][j] == 'S')
                break;
        if(j == c + 1){
            sum += c;
            count++;
        }
    }
 
    for(int i = 1; i <= c; i++){
        int j = 1;
        for(j = 1; j <= r; j++)
            if(a[j][i] == 'S')
                break;
        if(j == r + 1){
            sum += r - count;
        }
    }
 
    cout<<sum<<endl;
 
    return 0;
}