#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= 2 * n - 1; ++i) {
        // Loop for columns
        for (int j = 1; j <= 2 * n - 1; ++j) {
            // Find minimum of four distances
            int min_distance = (i < j) ? i : j;
            min_distance = (min_distance < 2 * n - i) ? min_distance : 2 * n - i;
            min_distance = (min_distance < 2 * n - j) ? min_distance : 2 * n - j;

            // Print the value at the center of the pattern
            printf("%d ", n - min_distance + 1);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
