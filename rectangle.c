#include <stdio.h>
int main(void)
{
    int lenght ;
    int width ;
    printf("Write the lenght: \n");
    scanf("%d", &lenght);
    printf("Write the width: \n");
    scanf("%d", &width);
    int P = 2*(lenght+width);
    int A = lenght*width;
    printf("Area: %d \n", A);
    printf("Perimeter: %d \n", P);
}
