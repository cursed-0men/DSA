// pattern 20
/*

    *
   **
  ***
 ****

...for n = 4
*/
// observation
// 4 rows, for n = 4
// logic : nth row contains n stars, but starting with space.
// 1st while loop for sapce and other for star.

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;


int i = 1;
while(i<=n){
    int space = n - i;
    while(space){
        cout<<" ";
        space--;
    }
    int j = 1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}