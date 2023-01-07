#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // int maxEle = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    //     maxEle = max(arr[i], maxEle);
    // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] > secondMax && arr[i] != maxEle)
    //         secondMax = arr[i];
    // }

    // for(int i = 0; i < n; i++){
    //     if(arr[i] > thirdMax && arr[i] != maxEle && arr[i] != secondMax)
    //         thirdMax = arr[i];
    // }
    // cout << thirdMax << endl;

    // sort(arr, arr + n);
    // cout << arr[n - 1] << " " << arr[n - 2] << " " << arr[n - 3];

    // int n;
    // cin >> n;
    // int fact = 1;
    // for(int i = n; i >= 1; i--)
    //     fact *= i;

    // cout << fact;

    // string s = "";
    // getline(cin, s);
    // string res = s;
    // reverse(res.begin(), res.end());

    // if(res == s)
    //     cout << "palindrome";
    // else
    //     cout << "not palindrome";

    // int n;
    // cin >> n;
    // int res = n;
    // int sum = 0;
    // while(n != 0){
    //     int digit = n % 10;
    //     sum = sum * 10 + digit;
    //     n = n / 10;
    // }
    // if(sum == res)
    //     cout << "Palindrome";
    // else
    //     cout << "Not palindrome";

    // int n;
    // cin >> n;

    // for(int i = 0; i < n + 1; i++){
    //     for(int j = i + 1; j < n + 1; j++)
    //         cout << "* ";
    //     cout << endl;
    // }

    //  for(int i = 0; i < n + 1; i++){
    //     for(int j = 1; j <= i; j++)
    //         cout << "* ";
    //     cout << endl;
    // }

    int n;
    cin >> n;
    int num1 = 0, num2 = 1, num3;
    cout << num1 << " " << num2 << " ";
    for(int i = 0; i < n - 2; i++){
        num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2;
        num2 = num3;
    }

    return 0;
}