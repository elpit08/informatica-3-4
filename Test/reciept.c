#include <stdio.h>
int main(void){
    char item [16];
    float price;
    int quantity;
    printf("What Item did you Buy? \n");
    scanf("%s", &item);
    printf("What is the Price of %s \n", item);
    scanf("%f", &price);
    printf(" how many %s did you buy\n", item);
    scanf("%d", &quantity);
    float Fprice = price*quantity;
printf("*************************************************************\n");
printf(" Abbarrotes doña Imelda, tu tienda de confianza \n");
printf("*************************************************************\n");
printf("Item \t   Quantity \tPrice \n");
printf("%s  \t   %d  \t %.2f \n", item, price, quantity);
printf("-------------------------------------------------------------\n");
printf(" Total \t\t\t %.2f \n", Fprice);
printf("-------------------------------------------------------------\n");
printf("Thanks for your purchase, Come back next time\n");
}
