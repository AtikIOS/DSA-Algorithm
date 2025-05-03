#include <iostream>
using namespace std;

// Binary Search Function (iterative)
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // found
        else if (arr[mid] < target)
            left = mid + 1; // go right
        else
            right = mid - 1; // go left
    }

    return -1; // not found
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20, 25}; // must be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    int index = binarySearch(arr, n, target);

    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}

