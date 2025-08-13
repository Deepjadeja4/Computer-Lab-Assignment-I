#include<stdio.h>
int main() {
   float dollars,rs,pounds;
   printf("enter dollars: ");
   scanf("%f",&dollars);
   rs = dollars * 48;
   pounds = rs / 70;
   printf("%f dollars = %f pounds\n", dollars, pounds);
   return 0;
}
