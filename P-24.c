#include <stdio.h>
int main()
{
    printf("To swap the numbers \n");
    printf("Enter the two numbers for swaping : ");
    float x,y,t;                                    
    scanf("%f %f %f",&x,&y,&t);
    t=x;   
    x=y;
    y=t;
    printf("After swapping : %f %f\n",x,y);
}
