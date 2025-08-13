#include <stdio.h>
int main() {
    float H, L;
    printf("Enter height and base: ");
    scanf("%f %f", &H, &L);
    printf("Area = %.2f\n", (H * L) / 2);
    return 0;
}
