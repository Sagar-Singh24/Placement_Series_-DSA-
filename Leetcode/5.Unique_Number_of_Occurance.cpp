#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freqMap;
    unordered_set<int> freqSet;

    // Count occurrences of each element
    for (int num : arr) {
        freqMap[num]++;
    }

    // Check if frequencies are unique
    for (const auto& pair : freqMap) {
        if (freqSet.count(pair.second) > 0) {
            return false; // Duplicate frequency found
        }
        freqSet.insert(pair.second);
    }

    return true; // All frequencies are unique
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (uniqueOccurrences(arr)) {
        cout << "The number of occurrences of each element is unique." << endl;
    } else {
        cout << "The number of occurrences of each element is not unique." << endl;
    }

    return 0;
}
