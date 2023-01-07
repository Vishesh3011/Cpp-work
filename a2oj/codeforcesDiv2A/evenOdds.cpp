#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,k,r;
    cin>>n>>k;
    if(n%2)n++;
    n/=2;
    if(n>=k)r=2*k-1;
    else r=2*(k-n);
    cout<<r<<endl;
    return 0;
}