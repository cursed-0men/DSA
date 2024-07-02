// pattern 21
/*

xxxx
xxx
xx
x

... for n = 4
*/
// observation
// 4 rows for n = 4
// logic : nth row contains opposite to corresponding x(s).

// H.W.

// no space needed
// x = n-i+1
#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

int i = 1;
while(i<=n){
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
