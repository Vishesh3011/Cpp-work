// #include<iostream>

// typedef long long ll;

// using namespace std;

// int main(){
//     ll n;
//     string s;

//     cin>>s;

//     ll sum = 0;
//     ll mid = -1;

//     n = s.length();

//     for(int i = 0; i < n; i++){
//         if(s[i] == '^'){
//             mid = i;
//             break;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         if(s[i] >= '1' && s[i] <= '9'){
//             sum += (s[i] - '0') * (i - mid);
//         }
//     }
//     if(sum == 0)
//         cout<<"balance";
//     else if(sum < 0)
//         cout<<"left";
//     else
//         cout<<"right";

//     return 0;
// }

#include<iostream>

using namespace std;

int main(){
    string s = "Gaz";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'z' || s[i] == 'Z' )
            s[i] = 'y';
    }
    cout<<s;
}