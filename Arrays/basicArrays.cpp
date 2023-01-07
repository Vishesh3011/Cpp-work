#include<iostream>
#include<climits>

using namespace std;

int main(){

    // int array[4] = {10, 20, 30, 40};

    // for(int i = 0; i < sizeof(array[4]); i++)
    //     cout<<array[i]<<endl;

    // int n;
    // cin>>n;

    // int array[n];

    // for(int i = 0; i < n; i++)
    //     cin>>array[i];

    // for(int i = 0; i < n; i++)
    //     cout<<array[i]<<" ";

    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];

    int maxNum = INT_MIN, minNum = INT_MAX;

    for(int i = 0; i < n; i++){
        // if(array[i] > maxNum)
        //     maxNum = array[i];

        maxNum = max(maxNum, array[i]);
        
        // if(array[i] < minNum)
        //     minNum = array[i];

        minNum = min(minNum, array[i]);
    }
    
    cout<<maxNum<<" "<<minNum;

}