#include <iostream>
using namespace std;

/**
 * This program checks whether a given integer is a power of two.
 *
 * It uses the property that if `num` is a power of two, then `num & (num - 1)` is 0.
 * For example:
 *   num = 8 (binary: 1000)
 *   mask = num - 1 = 7 (binary: 0111)
 *   num & mask = 1000 & 0111 = 0000 → result is 0 → power of two
 *
 * If the result is 0, then `num` is a power of two (assuming num > 0).
 * The program prints the result of `num & (num - 1)`.
 */

int main() {
    int num = 8;
    int mask = num - 1;
    int is_power_of_two = num & mask;
    cout << is_power_of_two << endl;
    return 0;
}
