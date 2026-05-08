#include <stdio.h>
int main(void){
    printf("What is your temperature in C: \n");
    int C;
    scanf("%d", &C);
    float F = (C * 1.8)+32;
    printf(" Your temperature is %.2f F \n", F);
    if(C<0){
        printf(" Freezing weather ❄️ \n");
    }
    else if(C<10){
        printf(" Very cold weather 🥶 \n");
    }
    else if(C<20){
        printf(" Chilly weather 🧥 \n");
    }
    else if(C<30){
        printf("Normal weather 🖼️ \n");
    }
    else if(C<40){
        printf(" Hot weather ☀️ \n");
    }
    else if(C<500){
        printf(" Very hot weather 🔥 \n");
    }
    else if(C>500){
        printf("JUDGEMENT DAY ☢️\n ");
    }
}
