// LeetCode Question 4

/*
Title : reverse integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:
Input: x = 123
Output: 321
*/

// link : https://leetcode.com/problems/reverse-integer/description/

// NOTE: 2 cases -> 1. normal case
//                  2. out of range case (print 0)

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

    int answer = 0;    // normal case
    while(n!=0){
        int r = n%10;
        if((answer > INT_MAX/10) || (answer < INT_MIN/10)){   // out of range condition
            return 0;
        }
        answer = (answer * 10) + r;
        n = n/10;
    }
      cout<<answer<<endl;       
return 0;
}

// NOTE : 
// INT_MIN = -2^32
// INT MAX = (2^31)-1

// if(answer > INT_MAX/10)  -> return 0;
// if(answer < INT_MIN/10)  -> return 0;

// divide by 10 because...we are multiplying 'answer' by 10.
