// storing negative numbers
// if first bit = 0, then number is +ve.
// if first bit = 1, then number is -ve.

// To store negative no.
/*
1. ignore -ve sign.
2. convert to binary.
3. take 2's compliment and store.


eg :  0000 0000 0000 0101
1's : 1111 1111 1111 1010
2's : 1111 1111 1111 1010
    +                   1
--------------------------
      1111 1111 1111 1011
      ^ this bit is 1, so number is -ve.
      this is stored.

*/

