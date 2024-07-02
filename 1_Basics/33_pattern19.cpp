// pattern 19

/*
A B C
B C D
C D E

...for n = 3
*/
// observation
// 3 rows, 3 columns, for n = 3
// logic : each row starts with corresponding char, regular counting and  same elements in each row depending of n.

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
        char ch = 'A'+i+j-2;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}

// formula used : a+i+j-2