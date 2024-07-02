// hw 3
/*
1111
 222
  33
   4

... for n = 4
*/
// observation
// 4 rows for n = 4
// logic : ith row has i-1 spaces
// ith row has n-i+1 elements

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
    int space = 1; // initializing spacce as 1
    while(space<i){
        cout<<" ";
        space++;
    }
    int j = 1;
    while(j<=n-i+1){
        cout<<i;
        j++;
    }
    i++;
    cout<<endl;
}

return 0;
}