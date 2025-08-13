#include <stdio.h>
int main() {
    long bytes;
    printf("Enter bytes: ");
    scanf("%ld", &bytes);
    printf("KB: %.2f\n", bytes / 1024.0);
    printf("MB: %.2f\n", bytes / (1024.0 * 1024));
    printf("GB: %.2f\n", bytes / (1024.0 * 1024 * 1024));
    return 0;
}
