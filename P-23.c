#include <stdio.h>
int main()
{
    printf("To find the average marks of the three subjects \n");
    printf("Enter the marks of three subjects :");
    float p,c,m,a;
    scanf("%f %f %f",&p,&c,&m);
    a=(p+c+m)/3;
    printf("Average marks is : %f\n",a);
}
