// Pattern 13
/*
A B C
D E F
G H I

... for n = 3
*/
// observation
// 3 rows, for n = 3
// logic : simple counting

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"n = ";
cin>>n;

int counter = 0;

int i = 1;
while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A'+counter;
        cout<<ch<<" ";
        counter++;
        j++;
    }
    i++;
    cout<<endl;
}
            
return 0;
}

//  we initialize counter as 0 because we have to print "A" first.
