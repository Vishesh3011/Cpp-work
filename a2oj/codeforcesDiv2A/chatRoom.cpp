#include<iostream>
#include<cstring>

using namespace std;

void sol(){
    string s, hello = "hello";
    int count = 0;
    cin>>s;

    for(int i = 0; i < s.size(); i++){
            if(count==5) break;
            if(s[i] == hello[count])
                count++;
    }

    if(count == 5){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    // int t;
    // cin>>t;

    // while(t--)

    sol();

    return 0;
}