#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter the elements of the first array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;

    vector<int> arr2(m);
    cout << "Enter the elements of the second array in sorted order: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> intersection = findArrayIntersection(arr1, n, arr2, m);

    cout << "The intersection of the two arrays is: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
