#include <stdio.h>
int main() {
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("%d minutes = %d hours\n", minutes, minutes / 60);
    return 0;
}
