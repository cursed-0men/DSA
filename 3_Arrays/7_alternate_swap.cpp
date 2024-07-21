// swap alternate elements in array

// odd length array
// arr[5] = {1,2,7,8,5}
// result = {2,1,8,7,5}

// even length array
// arr[6] = {1,2,3,4,5,6}
// result = {2,1,4,3,6,5}

// algo : 
// for i = o to size-1
// if i+1 < size, swap arr[i] and arr[i+1]
// increment for loop by 2 steps


#include<iostream>
using namespace std;


void printArray(int arr[], int size){
      for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
      }
}

void alternateSwap(int arr[], int size){
      for(int i = 0; i<size; i+=2){
            if(i+1 < size){
                  swap(arr[i], arr[i+1]);
            }
      }
}

int main()
{

int even[8] = {5,2,9,4,7,6,1,0};
int odd[5] = {11,33,9,76,43};

alternateSwap(even, 8);
printArray(even, 8);

cout<<endl;

alternateSwap(odd, 5);
printArray(odd, 5);
cout<<endl;


             
return 0;
}