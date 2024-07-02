// pattern 12
/*
A B C
A B C
A B C

... for n = 3
*/
// observations
// 3 rows, for n = 3
// 3 columns
// logic : column1 -> A, column2 -> B...

// Formula : 'A' + j - 1

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
        char ch = 'A'+j-1;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}         
return 0;
}
