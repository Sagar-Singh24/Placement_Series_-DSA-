#include <iostream>
#include <vector>
using namespace std;

void sortZeroOne(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        // Move left pointer if the element is 0
        if (arr[left] == 0) {
            left++;
        }
        // Move right pointer if the element is 1
        else if (arr[right] == 1) {
            right--;
        }
        // Swap elements when left points to 1 and right points to 0
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortZeroOne(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
