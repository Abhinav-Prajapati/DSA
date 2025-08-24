#include <iostream>
using namespace std;

int main () {
    int a = 7;                // a = 7 → binary: 0111
    int bit_position = 1;     // We want to toggle bit at position 1
    int mask = 1 << bit_position;  
    // mask = 1 << 1 = 2 → binary: 0010

    a ^= mask;
    /*
      Dry run of XOR (toggle):
      a = 0111 (7 in binary)
      mask = 0010 (2 in binary)
      --------------------
      a ^ mask = 0101 (5 in decimal)

      So bit at position 1 is toggled (1 → 0).
    */

    cout << a << endl;        // Output = 5
    return 0;
}
