// coding minja 1
// First/Last Occurrence of an Element in array: https://bit.ly/3Ioexjh 

/*
You have been given a sorted array/list 'arr' 
consisting of ‘n’ elements. You are also given 
an integer ‘k’.

Now, your task is to find the first 
and last occurrence(index position) of ‘k’ in 'arr'.
*/
// if not present return -1 -1;


#include<iostream>
using namespace std;

int first_occurance(int arr[], int n, int key){
      int start = 0;
      int end = n-1;

      int ans = -1;

      while(start<=end){
            int mid = (start+end)/2;

            if(arr[mid] == key){
                  ans = mid;
                  end = mid - 1; // for finding left most occurance.
            }
            else if(key > arr[mid]){
                  start = mid + 1;
            }
            else if(key < arr[mid]){
                  end = mid - 1;
            }
            
      }
      return ans;
}


int last_occurance(int arr[], int n, int key){
      int start = 0;
      int end = n-1;

      int ans = -1;

      while(start<=end){
            int mid = (start+end)/2;

            if(arr[mid] == key){
                  ans = mid;
                  start = mid + 1; // for finding right most occurance.
            }
            else if(key > arr[mid]){
                  start = mid + 1;
            }
            else if(key < arr[mid]){
                  end = mid - 1;
            }
            
      }
      return ans;
}


int main()
{
int arr[5] = {1,2,3,3,5};            
cout<<first_occurance(arr, 5, 3)<<endl;
cout<<last_occurance(arr, 5, 3)<<endl;     
return 0;
}