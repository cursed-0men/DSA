// Relational Operators
/*

=
>
>=
<
<=
!=

*/
#include<iostream>
using namespace std;
int main()
{
int a = 2;
int b = 3;

bool b1 = (a==b);
cout<<b1<<endl; // prints 0 i.e. not equal

bool b2 = (a!=b);
cout<<b2<<endl; // prints 1 i.e. equal

bool b3 = (a>=b);
cout<<b3<<endl; // prints 0 i.e. a is not greater than or equal to b

bool b4 = (a<=b);
cout<<b4<<endl; // prints 1 i.e. a is less than or equal to b
return 0;
}