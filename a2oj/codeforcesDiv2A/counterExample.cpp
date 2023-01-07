#include<iostream>

using namespace std;

int main(){
    long long a, b;
    cin>>a>>b;

    long long d = b - a + 1;

    if(d < 3 || (a % 2 == 1 && d < 4))
        cout<<-1;
    else{
        if(d % 2 == 0)
            cout<<a<<" "<<a + 1<<" "<<a + 2;
        else
            cout<<a + 1<<" "<<a + 2<<" "<<a + 3;
    }

    return 0;
}
