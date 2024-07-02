// size of

#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl; // prints size of data stored i.e. 4 bytes

    double d = 12;
    cout<<d<<endl;
    cout<<sizeof(d)<<endl; // 8 bytes 

    char ch = 'd';
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl; // 1 byte        
             
return 0;
}