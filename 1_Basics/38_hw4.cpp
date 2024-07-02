// hw 4
/*
   1
  22
 333
4444
...for n = 4.
*/

// observation
// 4 rows, for n = 4.
// logic : space = n - i, with decrement in each row
// nth row has n elements, that too same

#include<iostream>
using namespace std;
int main()
{
             
int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
    int space = n-i;
    while(space){
        cout<<" ";
        space--;
    }
    int j = 1;
    while(j<=i){
        cout<<i;
        j++;
    }
    i++;
    cout<<endl;
}
return 0;
}
 