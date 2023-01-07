#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x, y;
};

int checker(int x, int y, int x1, int y1){
    if(x1 > x && y == y1)
        return 0;
    if(x1 < x && y == y1)
        return 1;
    if(y1 > y && x == x1)
        return 2;
    if(y1 < y && x == x1)
        return 3;
    return -1;
}

int main(){
    int n;
    cin>>n;

    // vector <Point> v(n + 1);

    // for(int i = 1; i <= n; i++)
    //     cin>>v[i].x>>v[i].y;


    // int count = 0;

    // for(int i = 1; i < n; i++){
    //     int upper = false, lower = false, left = false, right = false;
    //     for(int j = 1; j <= n; j++){
    //         if(j != i){
    //             if(v[j].y == v[i].y && v[j].x > v[i].x)
    //                 right = true;
    //             if(v[j].y == v[i].y && v[j].x < v[i].x)
    //                 left = true;
    //             if(v[j].x == v[i].x && v[j].y > v[i].y)
    //                 upper = true;
    //             if(v[j].x == v[i].x && v[j].y < v[i].y)
    //                 lower = true;
    //         }
    //     }
    //     count += (upper && lower && right && left);
    // }

    // cout<<count;

    int a[n][2];
    for(int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1];
    }

    bool b[4] = {0, 0, 0, 0};
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i){
                int ans = checker(a[i][0], a[i][1], a[j][0], a[j][1]);
                if(ans >= 0)
                    b[ans] = 1;
            }
        }
        if(b[0] && b[1] && b[2] && b[3])
            count++;
        for(int j = 0; j < 4; j++)
            b[j] = 0;
    }

    cout<<count;

    return 0;
}