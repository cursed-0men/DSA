// Pass by Reference

#include<iostream>
using namespace std;

void swap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
}

int main()
{
      int x = 5;
      int y = 10;

      cout<<"before swap..."<<endl;
      cout<<"x = "<<x<<" "<<"y = "<<y<<endl;

      cout<<"after swap..."<<endl;
      swap(x,y);
      cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
             
return 0;
}