// for loop
/*

for(initialize; condition; inc/dec){
    code...
    code...
}

*/
// printing numbers 1 to n
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

for (int i = 1; i <= n; i++)
{
    cout<<i<<endl;
}       
return 0;
}