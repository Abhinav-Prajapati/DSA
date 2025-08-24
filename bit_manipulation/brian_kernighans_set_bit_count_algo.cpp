#include <iostream>
using namespace std;

/**
 * This program counts the number of set bits (1s) in the binary
 * representation of an integer using Brian Kernighan’s algorithm.
 *
 * Each iteration clears the least significant set bit.
 *
 * Example dry run for number = 5:
 *   Binary of 5: 0101
 *
 *   Iteration 1:
 *     number = 0101
 *     number - 1 = 0100
 *     number & (number - 1) = 0100
 *     set_bit_count = 1
 *
 *   Iteration 2:
 *     number = 0100
 *     number - 1 = 0011
 *     number & (number - 1) = 0000
 *     set_bit_count = 2
 *
 *   Loop ends as number becomes 0
 *   Output: 5 has 2 set bits.
 */

int main() {
    int number = 5;
    int number_copy = number;
    int set_bit_count = 0;

    while (number) {
        number = number & (number - 1);  // Clears the lowest set bit
        set_bit_count++;
    }

    cout << number_copy << " has " << set_bit_count << " set bits." << endl;
    return 0;
}
