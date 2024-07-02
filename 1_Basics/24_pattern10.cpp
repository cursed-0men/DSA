// pattern 10

/*

1
2 1
3 2 1
4 3 2 1

...for n = 4
*/

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
    while(j<=i){  // columns is less than equal to rows
        cout<<i-j+1<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}


// Revise!!!!