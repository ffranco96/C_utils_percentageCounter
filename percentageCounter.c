//
// Created by fraan on 1/4/2023.
//
#include "percentageCounter.h"

void initPercentageInt(int rounds, int direction,int *iPercentageStart, int* iPercentageStep){
    double dPercentageStep;

    if(direction == PCTG_INCR)
        *iPercentageStart = 0;
    else
        *iPercentageStart = 100;

    dPercentageStep = (double)100 / (double)rounds ;
    printf("Porcentaje step en double: %.2f\n", dPercentageStep);

    if(dPercentageStep >=0){
        if(dPercentageStep < 1){
            printf("Se redondea el salto a 1%\n");
            dPercentageStep = 1.0;
        }
        *iPercentageStep = (int)dPercentageStep;
    }
    if(direction == PCTG_DECR)
        *iPercentageStep=(*iPercentageStep)*(-1);

    printf("porcentaje inicial : %d\n", *iPercentageStart);
    printf("Salto: %d\n", *iPercentageStep);

}

void advancePercentage(int iPercentageStep, int *iPercentage){
    int step = iPercentageStep;
    printf("Salto %d\n", step);

    if(step < -100 || step >=100){
        step = 20;
    }

    *iPercentage +=step;
    if(*iPercentage < 0)
        *iPercentage = 0;
    printf("Actualizacion de iPercentage: %d\n", *iPercentage);
}