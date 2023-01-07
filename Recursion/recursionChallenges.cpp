#include<iostream>

using namespace std;

bool sorted(int a[], int n){
    if(n == 1)
        return true;

    int prevCond = sorted(a + 1, n - 1);

    return(prevCond && a[0] < a[1]);
}

void inc(int n){
    if(n == 0)
        return;
    
    inc(n - 1);
    cout<<n<<endl;
}

void dec(int n){
    if(n == 0)
        return;
    cout<<n<<endl;
    dec(n - 1);
}

int firstOcc(int a[], int n, int i, int k){
    if(n == i)
        return -1;

    if(a[i] == k)
        return i;
    
    return firstOcc(a, n, i + 1, k);
}

int lastOcc(int a[], int n, int i, int k){
    if(n == i)
        return -1;

    int prevCond = lastOcc(a, n, i + 1, k);
    if(prevCond != -1)
        return prevCond;
    
    if(a[i] == k)
        return i;
    
    return -1;
}

int main(){
    int n;
    cin>>n;

    // int array[n];
    // for(int i = 0; i < n; i++)
    //     cin>>array[i];
    
    // cout<<sorted(array, n);

    // inc(n);

    // dec(n);
    
    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];

    int key;
    cin>>key;

    cout<<firstOcc(array, n, 0,key)<<endl;

    cout<<lastOcc(array, n, 0,key)<<endl;


    return 0;
}