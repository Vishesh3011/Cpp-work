#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    char a[4][4];

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin>>a[i][j];
            if(a[i][j] != '.')
                count[a[i][j] - '0']++;
        }
    }

    for(int i = 0; i < 10; i++){
        if(count[i] > n * 2){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}