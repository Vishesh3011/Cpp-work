#include<iostream>

using namespace std;

int main(){
    int r1, c1, r2, c2;
    cin>>r1>>c1>>r2>>c2;

    int rook = 0, bishop = 0, king = 0;

    int rowDist = abs(r1 - r2), colDist = abs(c1 - c2);

    if(r1 != r2)
        rook++;
    if(c1 != c2)
        rook++;
    
    if(abs(rowDist - colDist) % 2 == 0){
        if(rowDist == colDist)
            bishop = 1;
        else
            bishop = 2;
    }

    if(r1 == r2)
        king = colDist;
    else if(c1 == c2)
        king = rowDist;
    else
        king = max(rowDist, colDist);

    cout<<rook<<" "<<bishop<<" "<<king;

    return 0;
}