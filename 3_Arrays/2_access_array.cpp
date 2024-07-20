// accessing all elements of an array using function


#include<iostream>
using namespace std;

void print_array(int arr[], int n){
      // here n is array size
      for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
      }
}

int main(){
      int age[10] = {22};
      //cout<<sizeof(age)/sizeof(int)<<endl;  ->  aray length
      print_array(age, 10);

return 0;
}
