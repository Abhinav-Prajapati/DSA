/**
 * Program to check if the ith bit of a number is set (1) or not (0).
 *
 * In this example:
 *   - a = 3 (binary: 011)
 *   - bit_position = 2 (checking the 3rd bit, index starts at 0)
 *   - Expression (a & (1 << bit_position)) isolates the bit at position 2.
 *   - Right shifting by bit_position (>> bit_position) normalizes it to 0 or 1.
 *
 * Expected output:
 *   - Since 3 (011) has the 2nd bit = 0, output will be 0.
 */

#include <iostream>
using namespace std;
int main () {
    int a = 3;
    int bit_position = 2;
    int is_set = (a & (1 << bit_position)) >> bit_position;
    cout << is_set << endl;
    return 0;
}
