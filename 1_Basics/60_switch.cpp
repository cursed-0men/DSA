// switch case
/*

switch(expression){

case const1:
code;
break;

case const2:
code;
break;

default:
}
*/


// calculator program
#include<iostream>
using namespace std;

int main()
{
      int a,b;
      cin>>a>>b;

      // operations menu
      while(true){
      cout<<"select option"<<endl;
      cout<<"+---------------------+"<<endl;
      cout<<"1. add"<<endl;
      cout<<"2. subtract"<<endl;
      cout<<"3. multiply"<<endl;
      cout<<"4. divide"<<endl;
      cout<<"5. exit..."<<endl;
      cout<<"+---------------------+"<<endl;

      int op;
      cout<<"enter op : ";
      cin>>op;

      switch (op)
      {
      case 1:
            cout<<a+b<<endl;
            break;
      
      case 2:
            cout<<a-b<<endl;
            break;
      
      case 3:
            cout<<a*b<<endl;
            break;
      
      case 4:
            cout<<a/b<<endl;
            break;
      
      case 5:
            cout<<"exiting program..."<<endl;
            return 0;
            
      default:
            cout<<"enter valid operation!!!"<<endl;
            break;
      }
      }
             
return 0;
}