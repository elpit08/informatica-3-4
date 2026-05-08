#include <stdio.h>
int main(void){
    int a = 5; //means assignment
    int b = 5;
    int c = 10; // 3 variables

    printf("%d==%d is %d \n", a, b, a==b);//== means comparison
    printf("%d==%d is %d \n", a, c, a!=c);
//program that identifies negative numbers
int number;
printf("Enter a number: \n");
scanf("%d", &number);
if (number < 0){// It stated that if the condition is meet then it will print
    printf("%d is a negative number. \n", number);
}else{// If the if funtion is not true then it will print this other function 
    printf("%d is a positive number. \n", number);
}
}

