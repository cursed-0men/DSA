// Pattern 15

/*

A
B B
C C C

... for n = 3
*/
// observation
// 3 rows, for n = 3
// logic : nth row contains n elements, starting from corresponding element.
// formula : 

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
        char ch = 'A'+i-1;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}

