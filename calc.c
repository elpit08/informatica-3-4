#include <stdio.h>

    void sum(void);
    void subtract(void);
    void multiply(void);
    void divide(void);

int main(void){
int equation;
    printf("Select your type of equation \n");
    printf("1 for sum \n 2 for subtraction \n 3 for multiply \n 4 for division \n");
scanf("%d", &equation);
if(equation == 1){
    sum();
}else if(equation == 2){
    subtract();
}else if(equation == 3){
    multiply();
}else if(equation ==4){
    divide();
}else if(equation > 4){
    printf(" Please, select an operation");
}
}
void sum(void){
float num1;
float num2;
    scanf("%f", &num1);
    printf("  \033[1A + ");
    scanf("%f", &num2);
    float result = num1 + num2;
    printf(" = %.3f \n", result);
}
void subtract(void){
    float num1;
    float num2;
    scanf("%f", &num1);
    printf("  \033[1A - ");
    scanf("%f", &num2);
    float result = num1 - num2;
    printf(" = %.3f \n", result);
}
void multiply(void){
    float num1;
float num2;
    scanf("%f", &num1);
    printf("  \033[1A * ");
    scanf("%f", &num2);
    float result = num1 * num2;
    printf(" = %.3f \n", result);
}
void divide(void){
    float num1;
float num2;
    scanf("%f", &num1);
    printf("  \033[1A / ");
    scanf("%f", &num2);
    float result = num1 / num2;
    if(num2 == 0){
        printf("SYNTAX ERROR \n EQUATION NO POSSIBLE \n ");
    } else{
    printf(" = %.3f \n", result);
    }
}
