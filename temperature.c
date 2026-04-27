#include <stdio.h>
int main(void)
{
    float F;
    printf("Whats is the Temperature in farenheit: \n");
    scanf("%.2f", &F);
    float C = (F-32)/1.8;
    printf("The temperature is %.2f = %.2f \n", F, C);
}
