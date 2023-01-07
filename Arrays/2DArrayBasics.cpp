#include<iostream>

using namespace std;

// void search2DArray(int r, int c, int a[r][c], int k){
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             if(a[i][j] == k){
//                 cout<<"Element Found!";
//                 break;
//             }
//             else
//                 cout<<"Element not found";
//         }
//     }
// }

int main(){
    int n, m;
    cin>>n>>m;

    // int key;
    // cin>>key;

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

    //search2DArray(n, m, array, key);
    // bool flag = false;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(array[i][j] == key){
    //             cout<<"Element Found!"<<endl<<i<<" "<<j;
    //             flag = true;
    //             break;
    //         }
    //     }
    // }

    // if(flag = false)
    //     cout<<"Element not found!";

    //spiral order print
    int rowStart = 0, rowEnd = n - 1, colStart = 0, colEnd = m - 1;

    while(rowStart <= rowEnd && colStart <= colEnd){
        //row start
        for(int col = colStart; col <= colEnd; col++)
            cout<<array[rowStart][col]<<" ";      
        rowStart++;      

        //col end
        for(int row = rowStart; row <= rowEnd; row++)
            cout<<array[row][colEnd]<<" ";
        colEnd--;

        // row end
        for(int col = colEnd; col >= colStart; col--)
            cout<<array[rowEnd][col]<<" ";
        rowEnd--;

        //col start
        for(int row = rowEnd; row >= rowStart; row--)
            cout<<array[row][colStart]<<" ";
        colStart++;
    }

    return 0;
}