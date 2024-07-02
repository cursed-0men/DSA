// pattern 14
/*
A B C 
B C D
C D E

... for n = 3.
*/

// observation
// 3 rows
// logic : each row starting with its own corresponding Alphabet and then counting regularly.
// formula : i+j-1

/*
i + j - 1 = 1
adding A-1 both sides
i+j+A-2 = A
*/

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int i = i;
while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = i+j+'A'-2;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}
             
return 0;
}


// NOTE : Replace 1 in formula by 'A' to map it.
