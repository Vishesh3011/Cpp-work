#include<iostream>

using namespace std;

void selectionSort(int n, int a[]){
    int temp = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
    
    selectionSort(n, array);

    return 0;
    
}