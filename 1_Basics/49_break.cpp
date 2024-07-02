// break statement 
// it is used to exit from a loop

// exit from a loop when we encounter any multiple of 10...starting from 1

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

for (int i = 1; i <= n; i++)
{
    if(i%10==0){
        break;
    }
    cout<<i<<" ";
}
// it'll exit the loop as we reach 10
             
return 0;
}
