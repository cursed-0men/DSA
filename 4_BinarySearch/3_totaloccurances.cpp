// finding total number of occurances of 3.

// given array : arr[7] = {1,2,3,3,3,3,5};
// firstly, find first occurance
// then find last occurance
// total occurance = last_occurnace_index - first_occurance_index + 1;

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
int arr[7] = {1,2,3,3,3,3,5};
cout<<first_occurance(arr, 7, 3)<<endl;
cout<<last_occurance(arr, 7, 3)<<endl;

cout<<"total occurances = "<<last_occurance(arr, 7, 3) - first_occurance(arr, 7, 3) + 1<<endl;
return 0;
}