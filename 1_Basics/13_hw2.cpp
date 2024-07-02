// sum of first n even numbers

#include<iostream>
using namespace std;
int main()
{
             
int n;
cout<<"n = ";
cin>>n;

int sum = 0;
int i = 0;

while(i<=n){
    if(i%2==0){
        sum += i;
    }
    i++;
}
cout<<sum<<endl;
return 0;
}