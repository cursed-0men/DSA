// Continue
// It is used to skip the iteration

// print multiples of 2 from 1 to n.

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

for(int i = 1; i<=n; i++){
    if(i%2==0){
        cout<<i<<" ";
    }
    else{
        continue;
    }
}
             
return 0;
}