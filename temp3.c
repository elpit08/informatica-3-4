#include <stdio.h>
void f_to_c(void);

void c_to_f(void);


int main(void){
    printf("Select your conversion: \n Celsius to Farenheit OR Farenheit to Celsius \n");
    printf("1=F to C or 2=C to F\n");
    int option;
    scanf("%d", &option);
    if(option == 1){
        f_to_c();
    }else if(option==2){
        c_to_f();
    } else{
        printf("No option was selected \n");
    }
}

void f_to_c(void){
      float F;
    printf("Whats is the Temperature in farenheit: \n");
    scanf("%f", &F);
    float C = (F-32)/1.8;
    printf("The temperature is %.2f F° = %.2f C° \n", F, C);
}
void c_to_f(void){
        printf("What is your temperature in C: \n");
    int C;
    scanf("%d", &C);
    float F = (C * 1.8)+32;
    printf(" Your temperature is %.2f F \n", F);
}
