#include<iostream>

using namespace std;

void bubbleSort(int n, int a[]){
    int temp = 0;
    int counter = 1;
    while(counter < n){
        for(int i = 0; i < n - counter; i++){
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
            }
        }
        counter++;
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
    
    bubbleSort(n, array);

    return 0;
    
}