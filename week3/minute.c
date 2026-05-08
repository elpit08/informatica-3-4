#include <stdio.h>
int main(void){
    int Mvt;
    int Hr;
    int Min;
    printf("What is your starting time \n");
    scanf("%d", &Hr);
    printf( " \033[1A :");
    scanf("%d", &Min);
    printf(" How long is the movie \n");
    scanf("%d", &Mvt);
    int Mvmin = Mvt%60;
    int FHr = Hr+Mvt/60;
    int Tdu = Mvt/60;
    int FMin =(Mvt+Min);
    printf("%d \n", FMin);
if( FMin >= 60){
    FHr = FHr + (FMin / 60);
    FMin = FMin % 60;
}

    printf("This movie will Last %d hours and %02d minutes \n", Tdu, Mvmin);
    printf(" Your finish time is: %d:%02d \n", FHr, FMin);
}
