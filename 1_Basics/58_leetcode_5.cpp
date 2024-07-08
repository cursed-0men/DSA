// Leetcode question 5

/*
title : Complement of base 10 integer
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Example 1:
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
*/
// link : https://leetcode.com/problems/complement-of-base-10-integer/description/

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int m = n;
int mask = 0;

if(n==0){
    cout<<"1"<<endl;
}

while(m!=0){
    mask = (mask<<1) | 1;
    m = m>>1; 
}
int answer = (~n) & mask;

// (~n) & mask -> answer
// creating mask :  n>>1 till n!=0
cout<<answer<<endl;

return 0;
}
// continue from lec 7 -> 27.52