#include <stdio.h>


int max_of_four(int a, int b, int c, int d) {
    int max = a;
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max;
}

int main() {

    int num1, num2, num3, num4;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    int result = max_of_four(num1, num2, num3, num4);

    printf("%d\n", result);

    return 0;
}
