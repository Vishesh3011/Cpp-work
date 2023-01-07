#include<iostream>

using namespace std;

void checkPalindrome(char a[], int n){
    bool check = true;
    for(int i = 0; i < n; i++){
        if(a[i] != a[n - 1 - i])
        {   
            check = false; 
            break;
        }
    }
    if(check == false)
        cout<<"Not a Palindrome";
    else
        cout<<"Palindrome";
}

void largestWord(char a[], int n){
    int maxLen = INT_MIN;

}

int main(){
    int n;
    cin>>n;
    cin.ignore();

    // char array[n];

    // int i = 0;

    // while(array[i] != '\0'){
    //     cout<<array[i]<<endl;
    //     i++;
    // }

    // cin>>array;
    //cout<<array<<endl;

    // checkPalindrome(array, n);


    //Largest Word in a Sentence
    char array[n + 1];
    cin.getline(array, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxSt = 0;
    while(1){
        if(array[i] == ' ' || array[i] == '\0'){
            if(currLen > maxLen){
                maxLen = currLen;
                maxSt = st;
            }
            currLen = 0; 
            st = i + 1;
        }
        else
            currLen++;

        if(array[i] == '\0')
            break;

        i++;
    }

    cout<<maxLen<<endl;

    for(int i = 0; i < maxLen; i++){
        cout<<array[i + maxSt];
    }

    return 0;
}