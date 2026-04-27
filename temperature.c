#include <stdio.h>
int main(void)
{
    float F;
    printf("Whats is the Temperature in farenheit: \n");
    scanf("%f", &F);
    float C = (F-32)/1.8;
    printf("The temperature is %.2f F° = %.2f C° \n", F, C);
}
