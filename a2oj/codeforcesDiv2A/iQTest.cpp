// doubt
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int odd = 0, even = 0, oddIdx, eveIdx;

    int x;

    for(int i = 1; i <= n; i++){
        cin>>x;
        if(x % 2 == 0)
        {
            eveIdx = i;
            even++;
        }
        else
        {
            oddIdx = i;
            odd++;
        }
    }

    if(odd < even)
        cout<<oddIdx;
    else
        cout<<eveIdx;

    return 0;
}