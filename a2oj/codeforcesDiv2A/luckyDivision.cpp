#include<iostream>

using namespace std;

void sol()
{
    int n;
    cin>>n;
    
    int digit;

    if(n % 7 == 0 || n % 4 == 0){
        cout<<"YES"<<endl;
        return;
    }
    while(n > 0){
        digit = n % 10;

        if(!(digit == 4 || digit == 7))
        {   cout<<"NO"<<endl;
            return;
        }

        digit = 0;
        n = n / 10;
    }
    cout<<"YES"<<endl;
}

int main()
{
    sol();
    return 0;
}