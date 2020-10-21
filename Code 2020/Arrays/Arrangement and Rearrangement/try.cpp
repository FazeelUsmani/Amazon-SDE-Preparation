#include <bits/stdc++.h> 
using namespace std; 
#define MAX 10000 

bool prime[MAX + 1]; 
void Eratosthenes() 
{ 
    memset(prime, true, sizeof(prime)); 

    prime[1] = false; 

    for (int p = 2; p * p <= MAX; p++) { 

        if (prime[p] == true) { 
            for (int i = p * 2; i <= MAX; i += p) 
                prime[i] = false; 
        } 
    } 
} 


int solve(int n) 
{ 
  int count = 0, num = 1; 

    
    long long int sum = 0; 

    while (count < n) { 

        if (prime[num]) { 
            sum += num; 

            //  the count 
            count++; 
        } 

       
        num++; 
    } 
    return sum; 
} 

int main() 
{ 
    
    Eratosthenes(); 
    int t;cin>>t;
    for(int i = 0;i<t;i++){ 
    int n;cin>>n;
    cout<< solve(n)<<endl; 
    }
     
} 