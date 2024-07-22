// leetcode 1 
// title : peak index in mountain array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
*/
// it is like shape of mountain  : 
// 1st part : increasingly sorted, arr[i] < arr[i+1]
// 2nd part : decreasingly sorted, arr[i] > arr[i+1]
// apply binary search for both part separately and kay as max.element

// peak : arr[i-1] < arr[i] > arr[i+1]

// if(arr[mid] < arr[mid + 1]) -> start = mid + 1
// else if(arr[mid] > arr[mid] + 1) -> end = mid. we wont do -1 or else peak will be missed out
// else -> it is peak

