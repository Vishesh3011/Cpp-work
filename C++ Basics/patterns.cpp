#include<iostream>
using namespace std;

int main() {
    //patterns
    
    // int i, j;
    // int rows, col;

    // cin>>rows>>col;

    // for(i = 1; i <= rows; i++){
    //     for(j = 1; j <= col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(i = 1; i <= rows; i++){
    //     for(j = 1; j <= col; j++){
    //         if(i == 1 || i == rows || j == 1 || j == col)
    //             cout<<"*";
    //         else
    //             cout<<" ";
    //     }
    //     cout<<endl;
    // }

    int i, j, n;
    cin>>n;

    // for(i = n; i >= 1; i--){
    //     for(j = i; j >= 1; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= n; j++){
    //         if(j <= n - i)
    //             cout<<" ";
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // int count = 0;

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= i;j++){
    //         count = count++;
    //         cout<<count<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= i; j++)
    //        cout<<"*";
    //     int space = 2 * n - 2 * i;
    //     for(j = 1; j <= space; j++)
    //         cout<<" ";
    //     for(j = 1; j <= i; j++)
    //        cout<<"*";
    //     cout<<endl;
    // }
    // for(i = n; i >= 1; i--){
    //     for(j = 1; j <= i; j++)
    //        cout<<"*";
    //     int space = 2 * n - 2 * i;
    //     for(j = 1; j <= space; j++)
    //         cout<<" ";
    //     for(j = 1; j <= i; j++)
    //        cout<<"*";
    //     cout<<endl;
    // }
   
    // for(i = 1; i <= n; i++){
    //        for(j = 1; j <= n + 1 - i; j++){
    //            cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
   
    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= i; j++){
    //         if(j > i)
    //             cout<<" ";
    //         else
    //             if((i + j)%2 == 0)
    //                 cout<<"1 ";
    //             else
    //                 cout<<"0 ";
    //     }
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= n - i; j++)
    //         cout<<" ";
    //     for(j = 1; j <= n; j++)
    //         cout<<"* ";
    //     for(j = 1; j <= n - i; j++)
    //         cout<<" ";
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= n -i; j++)
    //         cout<<" ";
    //     for(j = 1; j <= i ; j++)
    //         cout<<j<<" ";
    //     // for(j = 1; j <= n -i; j++)
    //     //     cout<<" ";
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= n -i; j++)
    //         cout<<"  ";
    //     int k = i;
    //     for(; j <= n; j ++)
    //         cout<<k--<<" ";
    //     k = 2;
    //     for(; j <= n + i - 1; j++)
    //         cout<<k++<<" ";
    //     cout<<endl;
    // }

    // for(i = 1; i <= n; i++)
    // {
    //     for(j = 1; j <= n - i; j++)
    //         cout<<"  ";
    //     for(j = 1; j <= 2 * i - 1; j++)
    //             cout<<"* ";
    //     cout<<endl;
    // }
    // for(i = n; i >= 1; i--)
    // {
    //     for(j = 1; j <= n - i; j++)
    //         cout<<"  ";
    //     for(j = 1; j <= 2 * i - 1; j++)
    //             cout<<"* ";
    //     cout<<endl;
    // }

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= n; j++){
            if((i + j) % 4 == 0)
                cout<<"* ";
            else if(i == 2 && j % 4 == 0)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}