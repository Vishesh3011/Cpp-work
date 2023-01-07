#include<bits/stdc++.h>

using namespace std;

struct Result{
    Result() : output1(){};
    int output1[100];
};

Result altTab(int n, int m, int arr[])
{
    //Read only region end...now...you can write whatever you want

    Result res;

    int j = 1;
    while(j != m){
        swap(arr[0], arr[j]);
        j++;
    }

    for(int i = 0; i < n; i++)
        res.output1[i] = arr[i];

    return res;
}

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    struct Result R;

    R = altTab(n, m, arr);

    for(int i = 0; i < n; i++)
        cout << R.output1[i] << " ";

    

    return 0;
}