#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector <int> count(n + 1, 0);
    
    for(int i = 0; i < n; i++)
        count[arr[i]]++;
    
    int missing, duplicate;
    for(int i = 1; i <= n; i++){
        if(count[i] == 0)
            missing = i;
        if(count[i] > 1)
            duplicate = i;
    }

    cout << duplicate << " " << missing;

    findMissingAndDuplicates(arr, count, n);

    return 0;
}