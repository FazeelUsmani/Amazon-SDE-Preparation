#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a; double b;string t;
    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin,t);
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(1)<<d+b<<endl;
    cout<<s<<t; 
    return 0;
}