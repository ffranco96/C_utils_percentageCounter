#include <stdio.h>
#include <time.h>
/*
 * @brief Initializes a percentage counter from 0 or 100 (indicated by progressDirection) and it
 * incrementes or decrementes "step" unities each round.
 *
 * @description Starts ...
 * Used to manage loading bars.
 *
 * @author Franco Macén
 * */
void initPercentage(int attempts, int retry,int *iPercentage, int* iPercentageStep){
    double dPercentageStep;
    *iPercentage = 100;
    dPercentageStep = (double)100 / (double)attempts ;
    printf("Porcentaje inicial en double: %.2f\n", dPercentageStep);

    if(dPercentageStep >=0){
        if(dPercentageStep < 1){
            printf("Se redondea el salto a 1%\n");
            dPercentageStep = 1.0;
        }
        *iPercentageStep = (int)dPercentageStep;
    }
    printf("porcentaje inicial : %d\n", *iPercentage);
    printf("Salto: %d\n", *iPercentageStep);

}

/*
 * @brief Initializes a percentage counter from 0 or 100 (indicated by progressDirection) and it
 * incrementes or decrementes "step" unities each round.
 *
 * @description Starts ...
 * Used to manage loading bars.
 *
 * @author Franco Macén
 * */
void advancePercentage(int iPercentageStep, int *iPercentage){
    int step = iPercentageStep;
    printf("Salto %d\n", step);

    if(step < 0 || step >=100){
        step = 20;
    }

    *iPercentage -=step; //@todo modify to bring the functioin multiple subfunctions: advance, lower, etc
    if(*iPercentage < 0)
        *iPercentage = 0;
    printf("Actualizacion de iPercentage: %d\n", *iPercentage);
}

int main()
{   int i = 0;
    int iPercentage = 0, iPercentageStep=0;

    initPercentage( 4, 3, &iPercentage, &iPercentageStep);

    for (i = 0; iPercentage > 0; i++){
        printf("%d\n", iPercentage);
        advancePercentage(iPercentageStep, &iPercentage);
        sleep(1);
    }
    return 0;
}
