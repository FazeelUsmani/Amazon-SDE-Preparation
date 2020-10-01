#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    int z[32] = {0};
    cout<<"enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>=0 && a[i]< 32){
            z[a[i]]++;
        }
    }
    cout<<"Elements that occured odd no of times"<<endl;
    for(int i =0;i<32;i++){
        if(z[i]%2 != 0){
            cout<<i<<" ";
        }
    }
    
}