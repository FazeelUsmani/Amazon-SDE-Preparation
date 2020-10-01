#include<bits/stdc++.h>
using namespace std;
int c = INT_MAX;
void solve(vector<int>v,int temp,vector<int>&z){
    if(v.size()== 1){
        c = min(temp,c);
        //cout<<c<<" ";
        z.push_back(c);
        return;
        }
    vector<int>::iterator itr;
    itr = v.begin();    
    int op1 = temp;int op2 = temp;
    op1 = op1 + min(*itr,*itr + 1);    
    op2 += abs(*itr - (*itr+1));
    v.erase(v.begin() + 0);
    solve(v,op1,z);
    v.front() = abs(*itr-op2);
    solve(v,op2,z);
}

int main(){
    vector<int>v;
    v.push_back(3);v.push_back(5);v.push_back(7);
    int temp = 0;vector<int>z;
    solve(v,temp,z);
    sort(z.begin(),z.end());
    cout<<z[0];

}