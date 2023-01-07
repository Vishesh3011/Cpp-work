#include<iostream>

using namespace std;

void insertionSort(int n, int a[]){
    for(int i = 1; i < n; i++){
        int current = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > current){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
        // for(int k = 0; k < n; k++)
        //     cout<<a[k]<<" ";
        // cout<<endl;
    }

    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}

int main(){
    int n;
    cin>>n;

    int array[n];
    
    for(int i = 0; i < n; i++)
        cin>>array[i];
    
    insertionSort(n, array);

    return 0;
    
}