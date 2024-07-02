// hw 6

/*
for n = 5

1234554321
1234xx4321
123xxxx321
12xxxxxx21
1xxxxxxxx1

*/

// observation
/*
triangle 1          triangle 2            triangle 3
12345              (2.1)(2.2)                54321  
1234                   x x                    4321
123                   xx xx                    321
12                   xxx xxx                    21
1                   xxxx xxxx                    1
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
    while(j<=n-i+1){ // printing LHS traingle -> n-i+1 elements in each row.
        cout<<j;
        j++;
    }
    int num_x_1 = 1; // printing 2.1 traingle -> i - 1 x in each row.
    while(num_x_1<i){
        cout<<"x";
        num_x_1++;
    }
    int num_x_2 = 1; // printing 2.2 triangle
    while(num_x_2<i){
        cout<<"x";
        num_x_2++;
    }
    int start = n-i+1; // printing triangle 3
    while(start){
        cout<<start;
        start--;
    
    }
    i++;
    cout<<endl;
}
             
return 0;
}