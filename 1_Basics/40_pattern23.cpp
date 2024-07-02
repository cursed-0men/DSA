// pattern 23
/*

   1
  121
 12321
1234321

...for n = 4 
*/

// we'll go row wise
// observation
// 4 rows for n = 4
// dividing it into 3 parts -> spaces, numbers, spaces
// each row has odd number of elements, with increment in eahc row.


#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
   int space = n-i; // printing LHS spaces
   while(space){
      cout<<" ";
      space--;
   } 
   int j = 1;     // printing LHS Triangle -> ith column contains i elements
   while(j<=i){
      cout<<j;
      j++;
   }
   int start = i-1; // printing RHS trinagle
   while(start){
      cout<<start;
      start--;
   }
   cout<<endl;
   i++;
}
             
return 0;
}


