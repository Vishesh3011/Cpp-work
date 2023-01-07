#include<iostream>

using namespace std;

void sol(){
    int n;
    cin>>n;

    int k = n % 10;

    if(n % 7 == 0){
        cout<<n<<endl;
    }
    else{
        n = n - k; 
        while(n % 7 != 0){
            n++;
        }
        cout<<n<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        sol();
    }

    return 0;
}