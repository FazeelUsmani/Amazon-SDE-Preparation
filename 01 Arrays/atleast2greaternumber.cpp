#include<bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[100];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<(n-2);i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	   
	   
	}
	return 0;
}