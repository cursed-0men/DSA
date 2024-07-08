// checking if number is prime or not

#include<iostream>
using namespace std;

bool prime(int n){
      int num_factors = 0;
      for(int i = 1; i<=n; i++){
            if(n%i==0){
                  num_factors++;
            }
      }
            if(num_factors==2){
                  return 1;
            }
            else{
                  return 0;
            }   
      }

int main()
{        
int x;
cin>>x;

cout<<prime(x)<<endl;

return 0;
}