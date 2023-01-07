    #include<bits/stdc++.h>

    using namespace std;

    int main(){
        int n, k;
        bool yesOrNo = true;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        
        sort(a, a + n);
        sort(b, b + n, greater <int> ());

        for(int i = 0; i < n; i++){
            if(a[i] + b[i] < k)
                yesOrNo = false;
        }

        if(yesOrNo == true)
            cout << "Yes";
        else
            cout << "No";
        
        return 0;
    }