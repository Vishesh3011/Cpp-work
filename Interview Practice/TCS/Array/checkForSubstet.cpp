#include <bits/stdc++.h>

using namespace std;

bool isSubset(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    if (m < n)
        return false;

    map<int, int> mp;

    for (int i = 0; i < m; i++)
        mp[arr2[i]]++;

    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (mp[arr1[i]] == 1)
            return false;
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    if (isSubset(arr1, arr2))
        cout << "arr1[] is a subset of arr2[]";
    else
        cout << "arr1[] is not a subset of arr2[]";

    return 0;
}