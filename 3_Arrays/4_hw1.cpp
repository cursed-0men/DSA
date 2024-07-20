//hw 1
// input array from user
// output sum of all elements

#include<iostream>
using namespace std;

int getSum(int arr[], int size){
      int sum = 0;
for(int i = 0; i<size; i++){
      sum += arr[i];
}
return sum;
}

int main()
{
int arr[20];

int size;
cout<<"Size : ";
cin>>size; 

for(int i = 0; i<size; i++){
      cin>>arr[i];
}

cout<<"Sum of elements : "<<getSum(arr, size)<<endl;
             
return 0;

}
