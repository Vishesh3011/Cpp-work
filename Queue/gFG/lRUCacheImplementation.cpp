#include<bits/stdc++.h>

using namespace std;

class lRUCache{
    deque <int> dq;
    unordered_map <int, deque <int> :: iterator> um;
    int n;

    public:
        lRUCache(int);
        void refer(int);
        void display();
};

lRUCache :: lRUCache(int size){
    n = size;
}

void lRUCache :: refer(int x){
    if(um.find(x) == um.end()){
        if(dq.size() == n){
            int lastEle = dq.back();
            dq.pop_back();
            um.erase(lastEle);
        }
    }
    else
        dq.erase(um[x]);

    dq.push_front(x);
    um[x] = dq.begin();
}

void lRUCache :: display(){
    for(auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main(){
    lRUCache cache(3);
    cache.refer(1);
    cache.refer(2);
    cache.refer(3);
    cache.display();

    cache.refer(1);
    cache.display();
    cache.refer(4);
    cache.refer(5);

    cache.display();

    return 0;   
}