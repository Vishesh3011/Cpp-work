#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;

    int a = sqrt(x * y / z);
    int b = sqrt(x * z / y);
    int c = sqrt(z * y / x);

    cout<<4 * (a + b + c)<<endl;

    return 0;
}
