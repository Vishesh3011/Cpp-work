#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    float median;
    if(n % 2 == 1)
        median = arr[n / 2];
    else
        median = (float)(arr[n / 2] + arr[(n / 2) - 1]) / 2;

    cout << median;

    return 0;
}

