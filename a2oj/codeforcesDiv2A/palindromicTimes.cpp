#include<iostream>

using namespace std;

int main(){
    int h, m;

    char ch;

    cin>>h>>ch>>m;

    int hour[] = {0, 1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 20, 21, 22, 23};
    int minutes[] = {0, 10, 20, 30, 40, 50, 1, 11, 21, 31, 41, 51, 2, 12, 22, 32};

    for(int i = 0; i < 16; i++){
        if((hour[i] == h && m < minutes[i]) || hour[i] > h){
            if(hour[i] < 10)
                cout<<"0";
            cout<<hour[i]<<":";
            if(minutes[i] < 10)
                cout<<"0";
            cout<<minutes[i]<<endl;;
            return 0;
        }
    }

    cout<<"00:00"<<endl;

    return 0;
}