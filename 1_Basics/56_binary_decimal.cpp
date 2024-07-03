// Binary to Decimal

// n = 110

// i = 0
// n!=0
// digit = n%10
// if(digit==1)->ans+=2^i
//i++;
//n = n/10
// print answer

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;

int i = 0;
int digit;
int answer = 0;
while(n!=0){
    digit = n%10; 
    if(digit==1){
        answer = answer + pow(2,i);
    }
    i++;
    n = n/10;
}
    cout<<answer<<endl;         
return 0;
}

// NOTE : 
/*
If we want digit : %10, /10
if we want bit(binary representation) :  &1, >>1
*/