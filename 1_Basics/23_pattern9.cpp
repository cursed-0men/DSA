// pattern 9

/*
1
2 3
3 4 5
4 5 6 7

... for n = 4
*/

// observation
// 4 rows, for n = 4
// logic : each row starting with the row number and then simple counting


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
    while(j<=i){ // columns are less than equal to rows 
        cout<<i+j-1<<" "; // for column values
        j++;
    } 
    i++;
    cout<<endl;
}

return 0;
}

// Revise!!!!