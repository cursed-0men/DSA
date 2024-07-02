/*check if character lies b/w -> A-Z (print uppercase)
, lies b/w -> a-z (print lowercase),
 lies b/w 0-9 (print numeric)*/

#include<iostream>
using namespace std;
int main()
{
             
char ch;
cout<<"Enter character : ";
cin>>ch;

if(ch>='A' && ch<='Z'){
    cout<<"uppercase"<<endl;
}
else if(ch>='a' && ch<='z'){
    cout<<"lowercase"<<endl;
}
else{
    cout<<"numeric"<<endl;
}

return 0;
}