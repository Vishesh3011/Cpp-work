#include<bits/stdc++.h>
#include<cstring>

using namespace std;

void sol(){
    int n, k;
    cin>>n>>k;

    if(k == 1){
        cout<<"YES"<<endl;
        for(int i = 1; i <= n; i++){
            cout<<i<<endl;
        }
        return;
    }

    if(n % 2){
        cout<<"NO"<<endl;
        return;
    }
    else
        cout<<"YES"<<endl;

    int row1 = 1, row2 = 2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(row1 <= n * k){
                cout<<row1<<" ";
                row1 += 2;
            }
            else{
                cout<<row2<<" ";
                row2 += 2;
            }
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--)
        sol();
    
    return 0;
}