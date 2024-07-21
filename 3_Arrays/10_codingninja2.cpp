// coding ninja question 2
// Duplicates in Array [https://bit.ly/3dm6bdZ]


// array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
// return the value from array which is repeated twice.

// optimal approach : array ^ array ^ repeating_element


/*
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;

    // XORing all array elements
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    
    // XOR [1, n-1]
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ i;
    }
return ans;
}
*/

// continue from Lec.10 -> 38.18