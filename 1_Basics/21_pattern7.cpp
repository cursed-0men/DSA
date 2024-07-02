// pattern 7
/*
1
2 2
3 3 3
4 4 4 4

... for n = 4
*/
// observation
// 4 rows, for n = 4
// logic : row n -> the number n is repeated for n times

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

int counter = 1;

int i = 1;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        if(i>=j){
            cout<<i<<" ";
            counter++;
        }
        j++;
    }
    i++;
    cout<<endl;
}
         
             
return 0;
}

//using for loop
// for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n; j++){
//         if(i>=j){
//         cout<<i<<" ";
//         counter++;
//         }
//     }
//     cout<<endl;
// } 


// NOTE : 
// always use counter when number needs to be printed

/*

1 1 1
2 2 2
3 3 3

*/


// always print i in "row number" like problems