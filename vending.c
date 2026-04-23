# include <stdio.h>

int main(void)
{
    // the first snack is orden mulitas de pipporo
    float price1 = 159.99;
    int quantaty = 40;
    char code1 = 'D';
    // the second snack is a kfc mega bucket
    float price2 = 699.99;
    int quantaty2 = 12;
    char code2 = 'K';
    // the third snack is a doble cheesburguer in combo de hamburguesas el rodeo
    float price3 = 179.99;
    int quantaty3 = 31;
    char code3 = 'R';

    printf("Vending Machine Stock \n");// Is the title
    printf("----------------------------------------------------------------- \n");
    printf("Item name: Orden de mulitas de pipporo\n Price: %.2f \n quantaty: %d \n Machine code: %c \n", price1, quantaty, code1);
    printf("Item name: KFC MEGA BUCKET\n Price: %.2f \n quantaty: %d \n Machine code: %c \n", price2, quantaty2, code2);
    printf("Item name: Doble cheeseburguer combo from hamburguesas el rodeo\n Price: %.2f \n quantaty: %d \n Machine code: %c \n", price3, quantaty3, code3);
}
