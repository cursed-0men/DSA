// Calculating nCr.
/*

nCr = n!/[(n-r)! * r!]

*/

#include<iostream>
using namespace std;

int factorial(int x){
      int product = 1;
      for(int i = 1; i<=x; i++){
            product = product * i;
      }
      return product;
}

int ncr(int n, int r){
      int answer = factorial(n)/(factorial(r) * factorial(n-r));
      return answer;
}

int main()
{

int a,b;
cin>>a>>b;

cout<<ncr(a,b)<<endl;        
return 0;
}