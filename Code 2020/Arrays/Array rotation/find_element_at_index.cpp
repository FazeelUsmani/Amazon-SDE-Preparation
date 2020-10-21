#include<bits/stdc++.h>
using namespace std;

int findno(int *a,int i,int j,int index){
    if(i<=index && j>=index){
        if(index == i)
            index = j;
        else
            index--;    
    }
    return a[index];
}

int main(){
    int a[] = {1,2,3,4,5};
    int index;
    cout<<"Enter the index at which value is need to be shown:"<<endl;
    cin>>index;
    cout<<findno(a,0,3,index);
}