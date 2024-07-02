// printing fibonacci series till nth term
// series : 0 1 1 2 3 5 8 13...
// next term is sum of previous 2

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int a = 0;
int b = 1;
int c;

for (int i = 1; i <= n; i++)
 {
    cout<<a<<" ";
    c = a+b;
    a = b;  // we keep incrementing a and b to next position
    b = c;

 } 
             
return 0;
}