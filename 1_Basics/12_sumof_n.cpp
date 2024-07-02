// sum of first n natural numbers

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n : ";
cin>>n;

int sum = 0;
int i = 1;
while(i<=n){
    sum = sum + i;
    i++;
}
cout<<sum<<endl;
            
return 0;
}

// We can also use formula : [n * (n+1)] / 2