#include <stdio.h>

int main() {
    // Read the size of the array
    int n;
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        // Swap elements at positions i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
