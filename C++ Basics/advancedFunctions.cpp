#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int sumNNatural(int num){
    float sum;
    sum = num * (num + 1) / 2;
    return sum;
}

int findMax(int n1, int n2){
    int max;
    if(n1 > n2)
        max = n1;
    else
        max = n2;
    return max; 
}

bool isPythagoreanTriplet(int num1, int num2, int num3){
    int x, y, z;
    x = findMax(num1, findMax(num2, num3));

    if(x == num1){
        y = num2;
        z = num3;
    }
    else if(x == num2){
        y = num1;
        z = num3;
    }
    else{
        y = num1;
        z = num2;
    }

    if(x * x == y * y + z * z)
        return true;
    return false;
}

int binary2Decimal(int num){
    int ans = 0;
    int x = 1;
    while(num > 0){
        int y = num % 10;
        ans += x * y;
        x = x * 2;
        num = num / 10;
    }
    return ans;
}

int octal2Decimal(int num){
    int ans = 0;
    int x = 1;
    while(num > 0){
        int y = num % 10;
        ans += x * y;
        x = x * 8;
        num = num / 10;
    }
    return ans;
}

int hexadecimal2Decimal(string abc){
    int ans = 0;
    int x = 1;

    int s = abc.size();

    for(int i = s - 1; i >= 0; i--){
        if(abc[i] >= '0' && abc[i] <= '9')
            ans += x * (abc[i] - '0');
        else if(abc[i] >= 'A' && abc[i] <= 'F')
            ans += x * (abc[i] - 'A' + 10);
        x = x * 16;
    } 
    return ans;
}

void decimal2Binary(int num){
    int ans[32], i = 0;
    while(num > 0){
        ans[i] = num % 2;
        num = num / 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
        cout<<ans[j];
}

void decimal2Hexadecimal(int num){
    int ans[32], i = 0;
    while(num > 0){
        ans[i] = num % 16;
        num = num / 16;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
        if(ans[j] <= 9)
            cout<<to_string(ans[j]);
        else{
            char c = 'A' + ans[j] - 10;
            cout<<ans[j];
        }
}

void add2Binary(int x, int y){
    int a = binary2Decimal(x);
    int b = binary2Decimal(y);
    int sum = a + b;
    return decimal2Binary(sum); 
}

int main(){
    int a, b, c, d, n;
    string s;

    // cin>>a>>b>>c;

    // cin>>n;

    cin>>a>>b;

    // cin>>s;

    // cout<<sumNNatural(n)<<endl;

    // if(isPythagoreanTriplet(a, b, c) == true)
    //     cout<<"The numbers are pythagorean triplet!";
    // else
    //     cout<<"Not a triplet!";

    
    // cout<<binary2Decimal(n)<<endl;

    // cout<<octal2Decimal(n)<<endl;

    // cout<<hexadecimal2Decimal(s)<<endl;

    // decimal2Binary(n);

    // decimal2Hexadecimal(n);

    add2Binary(a, b);

    return 0;
}