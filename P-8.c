#include <stdio.h>
int main() {
    float dollars;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    printf("%.2f dollars = %.2f Rs\n", dollars, dollars * 48);
    return 0;
}
