#include <iostream>
using namespace std;

/**
 * This program counts the number of set bits (1s) in the binary
 * representation of an integer using bitwise operations.
 *
 * It does so by checking the least significant bit in each iteration:
 * - If the bit is set (`a & 1`), it increments the `set_bit_count`.
 * - Then it right-shifts `a` to check the next bit.
 *
 * This loop runs for 32 iterations, assuming a 32-bit integer.
 *
 * Example:
 *   a = 7 (binary: 000...0111)
 *   Set bits = 3
 *
 * Output: 3
 */

int main () {
    int a = 7;
    int set_bit_count = 0;
    for (int i = 0; i < 32; i++) {
        if (a & 1) set_bit_count++;
        a >>= 1;
    }
    cout << set_bit_count << endl;
    return 0;
}
