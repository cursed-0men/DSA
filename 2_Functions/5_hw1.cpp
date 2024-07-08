// Hw 1
// Given AP general term => (3*n + 7)
// input n
// output nth term

#include<iostream>
using namespace std;

int nth_term(int n){
return (3*n)+7;
}

int main(){

  int x;
  cin>>x;

  cout<<nth_term(x)<<endl;

return 0;
}
