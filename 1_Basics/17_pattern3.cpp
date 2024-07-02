// pattern 3
/*

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

// observation
// 4 rows
// 4 columns
// logic : write column number 

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n : ";
cin>>n;

int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<j<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}
// using for loop

/* for(int i = 1; i<=n; i++){
     for(int j = 1; j<=n; j++){
         cout<<j<<" ";
     }
    cout<<endl;
 }
*/