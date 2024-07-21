// coding ninja question 3
// intersection of 2 arrays

// link : https://bit.ly/3Il0c7n

/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' 
respectively. Both these arrays are sorted in non-decreasing 
order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists 
of all the common elements occurring in both arrays.
*/

// return -1 if no intersection.

/*
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans; // creating vector.

	for(int i = 0; i<n; i++){  // traversing on first array
		int element = arr1[i];

		for (int j = 0; j<m; j++){ // comparing 'element' with other array element.
				if(element == arr2[j]){
					ans.push_back(element); // printing common element
					arr2[j] = -2; // updating already mapped element to new value that is not equal.
                    break;
				}
			}

		} 
		return ans;
}

// one common element can be mapped only once.

*/

// NOTE : TLE!!!

// OPTIMAL SOLUTION : 2 pointer approach (imp.)
/*
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0;
	int j = 0;

	vector<int> ans;


	while(i<n && j<m){
		if (arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++; 
			j++;
		}

		else if(arr1[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}


*/
// explanation : lec10 : 55.26