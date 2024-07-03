// Decimal system to binary system


// Approach 
// n = 5
// answer = 0
// until n!=0
// bit = n&1
// answer =  (bit*10^i)+ answer
// n>>1
// print answer

// code
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;

int answer = 0;
int bit;
int i = 0;
    while(n!=0){
        bit = (n&1);
        answer = (bit*pow(10,i))+answer;// using this formula to reverse the obtained binary bits
        n = n>>1;
        i++;
    }
    cout<<answer<<endl;
             
return 0;
}