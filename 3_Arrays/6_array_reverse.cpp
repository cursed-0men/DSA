// Reversing an array
// arr1 = {1,4,0,5,-2,15}
// arr2  = {2,6,3,9,4}

// 2 cases
// array of odd length
// array of even length

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
      for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}

void reverse(int arr[], int size){
int start = 0;
int end = size-1;    // here 0 and size-1 are indices of array.

while(start<=end){
      swap(arr[start], arr[end]);
      start++;
      end--;
      }
}

int main()
{
int arr1[6] = {1,4,0,5,-2,15};
int arr2[5] = {2,6,3,9,4};

reverse(arr1, 6);
printArray(arr1, 6);
cout<<endl;
reverse(arr2, 5);
printArray(arr2, 5);
            
return 0;
}
