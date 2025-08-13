#include <stdio.h>
int main() {
    float rs;
    printf("Enter Rs: ");
    scanf("%f", &rs);
    printf("%.2f Rs = %.2f dollars\n", rs, rs / 48);
    return 0;
}
