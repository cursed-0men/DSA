// Binary Search
// time complexity : O(log n)
// only works when elements are in sorted order. 

// mid = (low+high)/2
// low = 0
// high = n-1
// n = size of array


#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
      int l = 0;
      int h = size - 1;
      

      while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid]==key){
                  return mid;
            }

            else if(key<arr[mid]){
                  h = mid-1;
            }
            else{
                  l = mid+1;
            }
      }
      return -1;
}

int main()
{
int arr[6] = {2,4,6,8,12,18};            
int result = binary_search(arr, 6, 18);
cout<<result<<endl;

return 0;
}