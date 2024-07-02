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

// using for loop
for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
        if(i>=j){
            cout<<counter<<" ";
            counter++;
        }
    }
    cout<<endl;
}
             
return 0;
}
