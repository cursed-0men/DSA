// Checking if number is odd/even

#include<iostream>
using namespace std;

void odd_even(int n){
      if(n%2==0){
            cout<<"EVEN"<<endl;
      }
      else{
            cout<<"ODD"<<endl;
      }
}

int main()
{
      int x;
      cin>>x;

      odd_even(x);        
             
return 0;
}