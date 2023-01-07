#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    int minEle = INT_MAX;
    int maxEle = INT_MIN;

    int leftMostTallest = -1, rightMostShortest = -1;

    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] > maxEle){
            maxEle = a[i];
            leftMostTallest = i;
        }

        if(a[i] <= minEle){
            minEle = a[i];
            rightMostShortest = i;
        }
    }

    if(leftMostTallest < rightMostShortest)
        cout<<leftMostTallest - 1 + n - rightMostShortest<<endl;
    else
        cout<<leftMostTallest - 1 + n -  rightMostShortest - 1<<endl;

    return 0;
}