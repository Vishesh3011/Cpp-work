#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            //s[i] -= 32;
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        else
            // s[i] += 32;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    sort(s.begin(), s.end(), greater<int>());

    int counter[26];
    int maxNum = INT_MIN;
    char index = 'a';

    for(int i = 0; i < 26; i++)
        counter[i] = 0;

    for(int i = 0; i < s.size(); i++)
        counter[s[i] - 'a']++;

    for(int i = 0; i < 26; i++){
        if(counter[i] > maxNum){
            maxNum = counter[i];
            index = (char)('a'+i);
        }
    }

    cout<<maxNum<<" "<<index;
    
    // cout<<s;

    return 0;
}