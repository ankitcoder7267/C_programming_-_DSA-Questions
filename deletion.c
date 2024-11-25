#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int n = 6;  // Current size of the array
    int pos = 2;  // Position where you want to insert
    int newValue = 7;

    // Check if the position is valid
    if (pos < 0 || pos > n) {
        printf("Invalid position for insertion\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = newValue;

    // Update the size of the array
    n++;

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
