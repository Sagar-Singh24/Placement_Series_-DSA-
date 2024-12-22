#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int ans = 0;

    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array (including duplicate): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr);
    cout << "The duplicate element is: " << duplicate << endl;

    return 0;
}
