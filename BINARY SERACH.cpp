#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;   // Element found at index mid
        else if (arr[mid] < key)
            low = mid + 1;   // Search in right half
        else
            high = mid - 1;  // Search in left half
    }

    return -1;  // Element not found
}

int main() {
    int n, key, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at position %d (index %d).\n", result + 1, result);

    return 0;
}

