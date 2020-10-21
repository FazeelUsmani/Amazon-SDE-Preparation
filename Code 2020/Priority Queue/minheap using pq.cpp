#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}