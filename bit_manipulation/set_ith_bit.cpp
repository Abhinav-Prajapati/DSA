/**
 * @brief Demonstrates setting a specific bit in an integer using bitwise OR.
 * Example:
 *   a = 5 (binary 0101)
 *   bit_position = 1 (2nd least significant bit)
 *   After setting the bit, a becomes 7 (binary 0111).
 */
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int bit_position = 1;
    a |= (1 << bit_position);
    cout << a << endl;
    return 0;
}
