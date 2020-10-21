#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main(){
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
    srand(time(NULL));
    for(int i = n-1;i>=0;i--){
        int j = rand()%(i+1);
        swap(a[j],a[i]);
    }
    for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";
}