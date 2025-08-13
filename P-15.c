#include <stdio.h>
int main() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, (5.0/9)*(f - 32));
    return 0;
}
