#include <stdio.h>

void update(int *a, int *b) {
    // Store the original value of *a in a temporary variable
    int temp = *a;

    // Update *a to their sum
    *a = *a + *b;

    // Update *b to their absolute difference
    *b = abs(temp - *b);
}

int main() {
    // Declare variables to store two integers
    int a, b;

    // Taking input for two integers
    scanf("%d", &a);
    scanf("%d", &b);

    // Call the update function
    update(&a, &b);

    // Printing the updated values
    printf("%d\n%d\n", a, b);

    return 0;
}
