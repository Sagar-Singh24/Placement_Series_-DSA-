#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1; // Convert value to index
        if (nums[index] < 0) {
            duplicates.push_back(index + 1); // Duplicate found
        } else {
            nums[index] = -nums[index]; // Mark as visited
        }
    }

    return duplicates;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array (1 to n): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> duplicates = findDuplicates(nums);

    if (!duplicates.empty()) {
        cout << "Duplicate elements are: ";
        for (int num : duplicates) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicate elements found." << endl;
    }

    return 0;
}
