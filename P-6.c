#include <stdio.h>
int main() {
    int hours;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("%d hours = %d minutes\n", hours, hours * 60);
    return 0;
}
