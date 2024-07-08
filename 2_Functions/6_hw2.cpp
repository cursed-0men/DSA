// Hw 2

// input a = 2, b = 3
// output total setbits in a and b

# include<iostream>
using namespace std;

int num_setbits(int n){
int count = 0;

  while(n){
  if(n&1){
    count++;
  }
n = n >> 1;
}
return count;
}
int main(){
int x,y
cin>>x>>y;

int total_setbits = num_setbits(x) + num_setbits(y);
cout<<total_setbits<<endl;

  return 0;
}
