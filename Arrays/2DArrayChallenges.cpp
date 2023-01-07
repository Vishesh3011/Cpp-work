#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int array[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<array[i][j]<< " ";
        }
        cout<<endl;
    }

    //transpose
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout<<array[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    //matrix multiplication
    // int n1, n2, n3;
    // cin>>n1>>n2>>n3;

    // int m1[n1][n2];

    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n2; j++){
    //         cin>>m1[i][j];
    //     }
    // }

    // cout<<"\n\n";

    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n2; j++){
    //         cout<<m1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"\n\n";

    // int m2[n2][n3];

    // for(int i = 0; i < n2; i++){
    //     for(int j = 0; j < n3; j++){
    //         cin>>m2[i][j];
    //     }
    // }

    // cout<<"\n\n";

    // for(int i = 0; i < n2; i++){
    //     for(int j = 0; j < n3; j++){
    //         cout<<m2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"\n\n";

    // int m3[n1][n3];

    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n3; j++){
    //         m3[i][j] = 0;
    //     }
    // }

    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n3; j++){
    //         for(int k = 0; k < n2; k++){
    //             m3[i][j] += m1[i][k] * m2[k][j];
    //         }
    //     }
    // }

    // for(int i = 0; i < n1; i++){
    //     for(int j = 0; j < n3; j++){
    //         cout<<m3[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //matrix search better approach
    int key;
    cin>>key;

    bool flag = false;

    int r = 0, c = m - 1;

    while(r < n and c >= 0){
        if(array[r][c] == key){
            cout<<"Element Found"<<endl;
            flag = true;
            break;
        }
        else if(array[r][c] > key)
            c--;
        else
            r++;
    }

    if(flag = false)
        cout<<"Element not found!";

    return 0;
}