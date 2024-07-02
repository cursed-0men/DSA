// checking if number is +ve, -ve, or 0

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

if(n > 0){
    cout<<n<<" is +ve"<<endl;
}
else if(n < 0){
    cout<<n<<" is -ve"<<endl;
}
else{
    cout<<n<<" is 0"<<endl;
}
return 0;
}