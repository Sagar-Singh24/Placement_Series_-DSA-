#include <iostream>
using namespace std;

int findUnique(int *arr, int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr, size);
    cout << "The unique element is: " << uniqueElement << endl;

    delete[] arr;
    return 0;
}
