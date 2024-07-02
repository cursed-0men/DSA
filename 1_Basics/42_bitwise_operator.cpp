// Bitwise operators  

// 1. AND &  (both true is needed)
/*
x  y    z
0  0    0
0  1    0
1  0    0
1  1    1
*/



// 2. OR |   (atleast one true is needed)
/*
x  y    z
0  0    0
0  1    1
1  0    1
1  1    1
*/

// 3. NOT ~   (invert the bits)
/*
x     z
0     1  
1     0
*/

// XOR  ^ (both same - 0, both different - 1)
/*
x  y    z
0  0    0
0  1    1
1  0    1
1  1    0
*/

// implementing it
#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;
    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "~b = " << (~b) << endl;
    cout << "a^b = " << (a ^ b) << endl;
    return 0;
}
