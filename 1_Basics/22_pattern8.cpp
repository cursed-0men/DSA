// pattern 8
/*
1
2 3
4 5 6
7 8 9 10

... for n = 4
*/

// observation
// 4 rows, for n = 4
// logic : normal counting and number of numbers on each row according to row number

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int counter = 1;

int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<counter;
        counter++;
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}
