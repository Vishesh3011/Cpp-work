#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s[n];

    int a[2] = {0, 0};

    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    string s1, s2;
    
    for(int i = 0; i < n; i++){
        if(s1 == ""){
            s1 = s[i];
            a[0]++;
        }
        else if(s2 == "" && s1 != s[i]){
            s2 = s[i];
            a[1]++;
        }
        else if(s1 == s[i])
            a[0]++;
        else
            a[1]++;
    }

    if(a[0] > a[1])
        cout<<s1;
    else
        cout<<s2;

    return 0;
}
