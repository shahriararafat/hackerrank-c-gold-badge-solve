#include <stdio.h>

int main() {

    int int1, int2;
    float float1, float2;

    scanf("%d %d", &int1, &int2);
 
    scanf("%f %f", &float1, &float2);
   
    printf("%d %d\n", int1 + int2, int1 - int2);

    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    return 0:
}
