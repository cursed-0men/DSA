// Increment Operator
// i = i+1
// i++   post increment
// use and then increment
// i+=1
// ++i   pre increment
// increment ans then use

// Decrement Operator
// i = i-1
// i--  post decrement
// i-=1
// --i  pre decrement

#include<iostream>
using namespace std;
int main()
{
int i = 7;
cout<<(++i)<<endl; // 8         
cout<<(i++)<<endl; // 8, i = 9
cout<<i<<endl; // 9
cout<<(i--)<<endl; // 9, i = 8
cout<<(--i)<<endl; // 7
cout<<i<<endl; // 7
return 0;
}


