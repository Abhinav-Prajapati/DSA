/**
 * Initial value:
 *   a = 7  → in binary: 0111
 *   bit_position = 1
 *
 * Step 1: (1 << bit_position)
 *   (1 << 1) = 2
 *   In binary: 0010
 *
 * Step 2: ~(1 << bit_position)
 *   ~(0010) = 1101   (bitwise NOT flips all bits)
 *
 * Step 3: a &= ~(1 << bit_position)
 *   a = a & 1101
 *   0111  (7 in binary)
 * & 1101
 * ---------
 *   0101  (5 in binary)
 *
 * Final value of a = 5
 */

#include <iostream>
using namespace std;

int main () {
    int a = 7;
    int bit_position = 1;
    a &= ~(1 << bit_position);
    cout << a << endl;
    return 0;
}
