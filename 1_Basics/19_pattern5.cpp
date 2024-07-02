// pattern 5

/*

1 2 3
4 5 6 
7 8 9

... for n = 3
*/

// observation
// 3 rows
// 3 columns
// logic : simple counting, counter increased by one


#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n : ";
cin>>n;

int counter = 1;
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<"\t"<<counter<<" ";
        counter++;
        j++;
    }
    i++;
    cout<<endl;

}     
             
return 0;
}

//using for loop
// for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= n; j++)
//     {
//         cout<<"\t"<<counter<<" ";
//         counter++;   
//     }
//     cout<<endl;
// }  



// logic_2 : adding up n in each row for every column
