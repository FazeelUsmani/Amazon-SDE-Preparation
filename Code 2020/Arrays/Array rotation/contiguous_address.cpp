#include <iostream> 
using namespace std; 

int main() 
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"The address of "<<i<<"th element is "<< &a[i]<<endl;
    }
     
}