#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> arr(n);
    queue <int> q;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        q.push(arr[i]);
    }

    while(k--){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

