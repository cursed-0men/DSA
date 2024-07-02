// Pattern 1

/*

* * * *
* * * *
* * * *
* * * *

*/
// 4 rows
// 4 columns


#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n : ";
cin>>n;

int i = 1; // rows


while(i<=n){
    int j = 1; // columns
    while (j<=n)
    {
        cout<<"* ";
        j++;
    }
cout<<endl;
i++;
}
             
return 0;
}