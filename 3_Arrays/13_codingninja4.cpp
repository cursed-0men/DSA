// coding ninja 4
// title : pair sum

// link : https://bit.ly/3EwlU6e


// given array : [1,2,3,4,5]
// given s = 5

// from array find pair of numbers whose sum = 5
// output : 1 2, 3 4
// pair elements should be in sorted order

/*
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   vector<vector<int>> ans;

   for(int i = 0; i<arr.size(); i++){
      for(int j = i+1; j<arr.size(); j++){
         if(arr[i] + arr[j] == s){
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
         }
      }
   }
// sorting answer pairs
sort(ans.begin(), ans.end());
return ans;

}
*/