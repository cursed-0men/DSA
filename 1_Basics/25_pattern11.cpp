// pattern 11

/*
A A A
B B B
C C C

...for n = 3
*/

// obsservation
// 3 rows
// 3 columns
// logic : row1 -> A, row2->B...

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
    while(j<=n){
        char ch = 'A'+i-1;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}          
return 0;
}

// we need to find this formula -> 'A'+i-1