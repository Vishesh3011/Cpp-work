#include<iostream>

using namespace std;

void permutation(string s, string ans){
    if(s.size() == 0)
        cout<<ans<<endl;
    
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}

int countPath(int s, int e){
    if(s == e)
        return 1;
    if(s > e)
        return 0;
    
    int count = 0;

    for(int i = 1; i <= 6; i++){
        count += countPath(s + i, e);
    }

    return count;
}

int countPathOfMaze(int n, int i, int j){
    if(i == n - 1 && j == n - 1)
        return 1;
    if(i >= n | j >= n)
        return 0;
    return countPathOfMaze(n, i + 1, j) + countPathOfMaze(n, i, j + 1);
}

int main(){
    // string s;

    // cin>>s;

    // permutation(s, "");

    // int s, e;
    // cin>>s>>e;

    // cout<<countPath(s, e);

    int n;
    cin>>n;

    cout<<countPathOfMaze(n, 0, 0);

    return 0;
}