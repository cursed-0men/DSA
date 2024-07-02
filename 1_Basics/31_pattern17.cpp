// pattern 17
/*
A 
B C
C D E
D E F G

...for n = 4.
*/

// observation
// 4 rows, for n = 4
// logic : each row statrs with its corresponding alphabet and nth row contains n elements and normal counting.

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
        char ch = i+j+'A'-2;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}