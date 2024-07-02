// pattern 22
/*
xxxx
 xxx
  xx
   x
...for n = 4
*/
// observation
// 4 rows for n = 4.
// logic : spaces increase for each row by 1.
// formula used : space = i-1
// x decreases by 1 for each row.
// formula used : x = n-i+1

#include<iostream> 
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
    int space = 1;  // initializing space as 1 to stay along with logic.
    while(space<i){  // space is always less than row
        cout<<" ";
        space++;
    }
    int j = 1;
    while(j<=n-i+1){
        cout<<"x";
        j++;
    }
    i++;
    cout<<endl;
}

      
return 0;
}