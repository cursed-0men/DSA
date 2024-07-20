// finding max and min element in an array

#include<iostream>
using namespace std;

int getmax(int arr[], int size){
      int max = INT_MIN;
      for(int i = 0; i<size; i++){
            if(arr[i]>max){
                  max = arr[i];
            }
      }
      return max;
}


int getmin(int arr[], int size){
      int min = INT_MAX;
      for(int i = 0; i<size; i++){
            if(arr[i]<min){
                  min = arr[i];
            }
      }
      return min;
}

int main()
{
int size;
cout<<"enter array size : " ;
cin>>size;

int arr[8];

// taking input
for(int i = 0; i<size; i++){
      cin>>arr[i];
}

cout<<"Max value : "<<getmax(arr,size)<<endl;
cout<<"Min value : "<<getmin(arr,size)<<endl;
             
return 0;
}