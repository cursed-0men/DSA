// check if entered number is prime or not.

#include<iostream>
using namespace std;
int main()
{
             
int i = 1; //factor
int count = 0; // number of factors

int n;
cout<<"n : ";
cin>>n;

while(i<=n){
    if(n%i==0){
        cout<<i<<" is factor of "<<n<<endl;
        count++;
    }
    i++;
}

    if(count == 2){
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is not prime"<<endl;
    }
    



return 0;
}