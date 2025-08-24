#include <iostream>
using namespace std;

/**
 * This program calculates the number of bit flips required to convert
 * one integer (`start`) into another (`goal`). It uses XOR to identify
 * differing bits, then counts how many bits are set (i.e., different).
 *
 * For example:
 *   start = 10 (binary: 1010)
 *   goal  =  7 (binary: 0111)
 *   XOR         => 1101 (difference in 3 positions)
 *   Output: 3
 *
 * This has applications in problems like Hamming distance, or
 * determining how many single-bit operations are needed to convert
 * one value into another.
 */

int main() {
    int start = 10;
    int goal = 7;
    int differingBits = start ^ goal;  // XOR to find differing bits
    int bitFlipCount = 0;

    for (int i = 0; i < 32; i++) {
        if (differingBits & 1) bitFlipCount++;
        differingBits >>= 1;
    }

    cout << "Number of bit flips needed: " << bitFlipCount << endl;
    return 0;
}
