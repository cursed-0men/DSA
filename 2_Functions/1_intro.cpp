// Functions

// it makes code reusable and organised.
// Increases readibility of code.


// function for printing a^b.

#include<iostream>
#include<cmath>
using namespace std;

int power(int x, int y){   // function definition
      return pow(x,y);
}
int main()
{
int a,b;
cin>>a>>b;

//int result = power(a,b);
cout<<pow(a,b)<<endl; // function call
             
return 0;
}

// here x,y are formal parameters i.e used in function definition.
// a,b are actual parameters/ arguments used in function call.