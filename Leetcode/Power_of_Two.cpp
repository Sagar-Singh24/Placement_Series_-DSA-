#include <iostream>
#include <cmath>
using namespace std;

class Solution{
    public:
    bool isPowerOfTwo(int n){
        for(int i=0;i<=30;i++){
            int ans = pow(2,i);
            if (ans == n)
            {
                return ans;
            }
        }
    }
};
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution solution;
    if (solution.isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}