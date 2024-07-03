// pattern 18
/*

D
C D
B C D
A B C D

... for n = 4
*/
// observation
// 4 rows, for n = 4;
// logic : Each row starts form opposite corresponding char and nth row has n elements and regular counting.

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
    while(j<=i){
        char ch = 'A'+n-i+j-1;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}


// formula used
// a + n - i + j - 1




