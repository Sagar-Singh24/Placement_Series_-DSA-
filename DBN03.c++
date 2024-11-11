#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = 0;
    int place = 1;  // Place value in binary (1, 10, 100, ...)

    while (n != 0) {
        int bit = n & 1;  // Get the least significant bit
        ans = (bit * place) + ans;  // Add the bit at the correct place value
        place *= 10;  // Move to the next place value in binary
        n = n >> 1;  // Right shift n to process the next bit
    }

    cout << "Binary representation is: " << ans << endl;
}
