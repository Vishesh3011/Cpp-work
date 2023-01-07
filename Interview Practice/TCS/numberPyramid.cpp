#include <bits/stdc++.h>

using namespace std;

bool checkIfPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> dp(1000, 0);

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (dp[n])
        return dp[n];

    dp[n] = n * fact(n - 1);

    return dp[n];
}

bool checkPalindrome(int n)
{
    int temp = n;
    int duplicate = 0;
    while (n != 0)
    {
        duplicate = duplicate * 10 + (n % 10);
        n = n / 10;
    }
    if (duplicate == temp)
        return true;
    return false;
}

vector<int> dp2(1000, 0);
long int findFibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp2[n])
        return dp2[n];
    dp2[n] = findFibo(n - 1) + findFibo(n - 2);
    return dp2[n];
}

void fibonacciSeries(int n)
{
    vector<long int> ans;

    for (int i = 0; i <= n; i++)
    {
        ans.push_back(findFibo(i));
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << i;
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n - i; j >= 0; j--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    cout << endl;

    int m;
    cin >> m;

    if (checkIfPrime(m))
        cout << "is prime" << endl;
    else
        cout << "not prime" << endl;

    cout << endl
         << fact(n) << endl;

    int N;
    cin >> N;

    int arr[N][N];

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            if (j == i)
                sum += arr[i][j];
            rowSum += arr[i][j];
        }
        cout << rowSum << " ";
    }

    cout << endl
         << sum << endl;

    int num;
    cin >> num;

    if (checkPalindrome(num))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    cout << endl;

    int number;
    cin >> number;

    fibonacciSeries(number);

    return 0;
}