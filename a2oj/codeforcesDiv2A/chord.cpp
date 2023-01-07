#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string s[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

int distance(string x, string y, string z){
    int pos[3] = {0};

    for(int i = 0; i < 12; i++){
        if(s[i] == x)
            pos[0] = i;
        
        if(s[i] == y)
            pos[1] = i;
        
        if(s[i] == z)
            pos[2] = i;
    }

    sort(pos, pos + 3);

    int dist[3] = {pos[1] -pos[0], pos[2] - pos[1], 12 + pos[0] - pos[2]};

    for(int i = 0; i < 3; i++){
        if(dist[i] == 4 && dist[(i + 1) % 3] == 3)
            return 1;
        if(dist[i] == 3 && dist[(i + 1) % 3] == 4)
            return 2;
    }
    return 0;
}

int main(){
    string x, y, z;
    cin>>x>>y>>z;

    int flag = distance(x, y, z);
    if(flag == 1)
        cout<<"major";
    else if(flag == 2)
        cout<<"minor";
    else
        cout<<"strange";

    return 0;
}