#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector <int> prevSmaller(int a[], int n){
    vector <int> prev(n);
    stack <int> s;
    for(int i = 0; i < n; i++){
        if(s.empty()){
            prev[i] = 0;
            s.push(i);
        }
        else{
            while(!s.empty() and a[s.top()] >= a[i])
                s.pop();
            prev[i] = s.empty() ? 0 : s.top() + 1;
            s.push(i);
        }
    }
    return prev;
}

vector <int> nextSmaller(int a[], int n){
    vector <int> next(n);
    stack <int> s;
    for(int i = n - 1; i >= 0; i--){
        if(s.empty()){
            next[i] = n - 1;
            s.push(i);
        }
        else{
            while(!s.empty() and a[s.top()] >= a[i])
                s.pop();
            next[i] = s.empty() ? n - 1 : s.top() - 1;
            s.push(i);
        }
    }
    return next;
}

int maxHist(int a[], int n){
    int area = 0;
    vector <int> prev = prevSmaller(a, n);
    vector <int> next = nextSmaller(a, n);
    for(int i = 0; i < n; i++)
        area = max((next[i] - prev[i] + 1) * a[i], area);
    return area;
}

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    int currRow[m];
    for(int i = 0; i < m; i++)
        currRow[i] = arr[0][i];

    int maxArea = maxHist(currRow, m);

    for(int i  = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 1)
                currRow[j] += 1;
            else
                currRow[j] = 0;
        }
        int currAns = maxHist(currRow, m);
        maxArea = max(maxArea, currAns);
    }

    cout << maxArea ;

    return 0;
}