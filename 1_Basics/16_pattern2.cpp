// Pattern 2
/*

1 1 1
2 2 2
3 3 3

*/
// 3 rows
// 3 columns
// pattern : row's number is written 

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){  // rows i to n on y axis
    int j = 1;  // column starting from 1.
    while(j<=n){ // column from j to n on x axis
        cout<<i<<" ";  // printing row number n times horizontally
        j = j+1;  // increasing j for printing i on x axis n times.
    }
    cout<<endl;
    i++;
}


    
// remianing from 53:29
// lec 3.

             
return 0;
}