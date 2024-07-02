// pattern 16

/*
A
B C
D E F
G H I J

... for n = 4.
*/
// observation
// 4 rows, for n = 4
// logic : simple counting, and n elements in nth row

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

int counter = 0;

int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        char ch = 'A'+counter;
        cout<<ch<<" ";
        counter++;
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}
