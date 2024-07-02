// Conditional Statements

// check for greater number
#include<iostream>
using namespace std;
int main()
{

int a;
cout<<"a = ";
cin>>a;

int b;
cout<<"b = ";
cin>>b;

cout<<a<<" "<<b<<endl;

if(a>b){
    cout<<a<<endl;
}
else if(a<b){
    cout<<b<<endl;
}
else{
    cout<<"both are equal"<<endl;
}
             
return 0;
}