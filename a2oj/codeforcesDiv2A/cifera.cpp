#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int k, l;
    cin>>k>>l;

    long long int n = l;

    if(l % k == 0){
        if(l == k){
            cout<<"YES"<<endl<<0;
            return 0;
        }
        int count = 0;
        while(1) {
            l = l / k;
            count++;
            if(l == 1){
                if(pow(k, count) != n){
                    cout<<"NO"<<endl;
                    return 0;
                }
                cout<<"YES"<<endl<<count - 1;
                return 0;
            }
            if(l <= 0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}