// pattern 4

/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

*/

// observation
// 4 rows
// 4 columns
// logic : printing column numbers in reverse order

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"n = ";
cin>>n;

int i = n;
while(i>0){
    int j = n;
    while (j>0)
    {
        cout<<j<<" ";
        j--;
    }
    i--;
    cout<<endl;
}

return 0;
}

// using for loop
/*
for(int i = n; i>0; i--){
    for(int j = n; j>0; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
*/        