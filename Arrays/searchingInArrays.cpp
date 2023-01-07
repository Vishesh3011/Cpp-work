#include<iostream>
#include<cmath>

using namespace std;

void linearSearch(int k, int n, int a[]){
    for(int i = 0; i < n; i++){
        if(k == a[i])
            cout<<"Element found at "<<i<<"!"<<endl;
    }
}

void binarySearch(int k, int n, int a[]){
    int first = 0, last = n, mid;
    while(first <= last){
        int mid = (first + last) / 2;
        if(k < a[mid])
            last = mid - 1;
        else if(k == a[mid]){
            cout<<"Element found at "<<mid<<"th position!";
            break;
        }
        else
            first = mid + 1;
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];

    int key;
    cin>>key;

    // linearSearch(key, n, array);

    binarySearch(key, n, array);
}
