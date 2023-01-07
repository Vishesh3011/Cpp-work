//doubt
#include<iostream>
#include<cmath>

using namespace std;

bool checkForZero(int n){
    int temp = n;
    while(temp != 0){
        if(temp % 10 == 0)
            return true;
        temp = temp / 10;
    }
    return false;
}

int main(){
    int a, b;
    cin>>a>>b;

    int flag = 1;

    if(!checkForZero(a) && !checkForZero(b)){
        cout<<"YES"<<endl;
        return 0;
    }

    if((checkForZero(a) && !checkForZero(b)) || (!checkForZero(a) && checkForZero(b))){
        cout<<"NO"<<endl;
        return 0;
    }

    while(a != 0 && b != 0){
        if((a % 10) + (b % 10) > 10){
            flag = 0;
            break;
        }
        a = a / 10;
        b = b / 10;
    }

    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
