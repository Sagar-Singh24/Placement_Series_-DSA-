#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";  // Added prompt for input
    cin >> n;

// Decimal to BInary 

    float ans = 0; // MAJOR CHANGE : Just changed the 'Int' data type to 'Float' data type of ans variable. 
    int i = 0;

    while (n != 0) {
        int bit = n & 1;  // Get the least significant bit
        ans = (bit * pow(10, i)) + ans;  // Add the bit at the 10^i place
        n = n >> 1;  // Right shift n to process the next bit
        i++;  // Increment position
    }

    cout << "Answer is " << ans << endl;
