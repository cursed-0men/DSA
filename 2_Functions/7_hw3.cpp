// input n
// output nth fibonaci term

// fib : 0,1,1,2,3,5,8...
// n = 5, 3 is answer

#include<iostream>
using namespace std;

int fib(int n){
  if(n==1){
  return 0;
  }
  else if(n==2){
  return 1;
  }
  else{
    return fib(n-1)+fib(n-2);
      }
}

int main(){
int x;
cin>>x;
  cout<<fib(x)<<endl;
return  0;
}
