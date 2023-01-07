#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

typedef long long int ll;

using namespace std;

bool checkForNum(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] < '0' || s[i]  > '9')
            return false;
    }
    return true;
}

int getNum(string s){
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

string alchoholic[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

int main(){
    int n;
    cin>>n;

    int count = 0;

    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        
        if(checkForNum(s)){
            if(getNum(s) < 18)
                count++;
        }
       
        for(int j = 0; j < 11; j++){
            if(s == alchoholic[j])
                 count++;
        }
    }

    cout<<count;

    return 0;
}
