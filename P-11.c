#include <stdio.h>
int main() 
{ 
    printf("Changing grams to kilo grams \n ");
    printf("Enter kilo grams to change : ");
    float g;
    scanf("%f",&g);
    g=g/1000;
    printf("There are %f kilo grams . ",g);
}


