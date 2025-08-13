#include <stdio.h>
int main() {
    float P, R, N;
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &P, &R, &N);
    printf("Interest = %.2f\n", (P * R * N) / 100);
    return 0;
}
