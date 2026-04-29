#include <stdio.h>
int main(void){
    int Mvt;
    int Hr;
    int Min;
    printf("What is your starting time \n");
    scanf("%d", &Hr);
    scanf("%d", &Min);
    printf(" How long is the movie \n");
    scanf("%d", &Mvt);
    int FHr = Hr+Mvt/60;
    int Tdu = Mvt/60;
    int FMin =(Mvt+Min)%60;
    printf("This movie will Last %d hours and %02d minutes \n", Tdu, FMin);
    printf(" Your finish time is: %d:%02d \n", FHr, FMin);
}
