#include<iostream>

using namespace std;

void DNFSort(int a[], int n){
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(a[mid] == 1)
            mid++;
        else if(a[mid] == 2){
            swap(a[mid], a[high]);
            high--;
        }
        else{
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i = 0; i< n; i++)
        cin>>array[i];

    DNFSort(array, n);

    for(int i = 0; i < n; i++)
        cout<<array[i]<<" ";

    return 0;
}