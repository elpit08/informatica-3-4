#include <stdio.h>
int main(void){
    int Mvt;
    int Hr;
    int Min;
    printf("What is your starting time \n");
    scanf("%d:%d", &Hr, &Min);
    printf(" How long is the movie \n");
    scanf("%d", &Mvt);
    int FHr = Hr+Mvt%60;
    //int FMin =
    printf(" Your finish time is: %d: \n", FHr);
}
