// Linear Search

// check whether 1 is present in array or not
// if yes, tell its index position
// using function

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
      for(int i = 0; i<size; i++){
            if(arr[i]==key){
                  return 1;
            } 
      }
      return 0;
}

int main()
{
int arr[10] = {5,7,-2,10,22,-1,0,5,22,1};

int key;
cout<<"key = ";
cin>>key;

bool found = linearSearch(arr,10,key);
if(found){
      cout<<"key is found"<<endl;
}
else{
      cout<<"kay not found";
}
             
return 0;
}