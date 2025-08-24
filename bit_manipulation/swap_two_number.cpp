/**
 * XOR Swap Algorithm
 *
 * This program demonstrates how to swap two numbers without using a temporary variable.
 * It uses the properties of the XOR (^) bitwise operator:
 *
 *   1. x ^ x = 0
 *   2. x ^ 0 = x
 *   3. (x ^ y) ^ y = x
 *
 * Steps:
 *   - a = a ^ b   // combines a and b
 *   - b = a ^ b   // extracts original a into b
 *   - a = a ^ b   // extracts original b into a
 *
 * This effectively swaps the values of a and b.
 * Note: If a and b are the same value, the swap has no effect.
 */

#include <iostream>
using namespace std;

int main () {
    int a = 10, b = 5;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;
    return 0;
}
