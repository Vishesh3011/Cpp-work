#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    // int array[n][3];

    // int sum;

    // for(int i = 0; i < n; i++)
    //     for(int j = 0; j < 3; j++)
    //         cin>>array[i][j];

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 3; j++){
    //         sum += array[j][i];
    //     }
    // }

    // if(sum == 0)
    //     cout<<"YES";
    // else
    //     cout<<"NO";

    int sumX = 0, sumY = 0, sumZ = 0;

    int x, y, z;

    while(n--){
        cin>>x>>y>>z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}