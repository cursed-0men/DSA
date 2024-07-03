// hw 5
/*
 1234
  123
   12
    1
... for n = 4
*/

// observation
// 4 rows and 4 columns, for n = 4
// logic : 
// space = i-1, with increment in each row
// elements = n-i+1 in each row.
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
    int space = 1;
    while(space<i){
        cout<<" ";
        space++;
    }
    int j = 1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}
