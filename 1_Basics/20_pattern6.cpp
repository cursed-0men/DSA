// pattern 6

/*

*
* *
* * *
* * * *

... for n = 4
*/
// observation
// 4 rows
// logic : number of stars in each row according to its number

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
        if(i>=j){
            cout<<"* ";
        }
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}

// using for loop
// for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= n; j++)
//     {
//         if(i>=j){
//             cout<<"* ";
//         }   
//     }
//     cout<<endl;
// } 