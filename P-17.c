#include <stdio.h>
int main() {
    float L;
    printf("Enter side length: ");
    scanf("%f", &L);
    printf("Area = %.2f\n", L * L);
    printf("Perimeter = %.2f\n", 4 * L);
    return 0;
}
