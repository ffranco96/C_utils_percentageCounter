#include <stdio.h>
#include <time.h>

#define PC_FWD 2 // ??
#define PC_BKW 3

/*
 * Status: To develop-> modification of double value of functions to an integer value for the case of the integer counter.
 * Then program another one that is prepared for double values.
 * Increasing and decreasing values.
 * Correction of errors in case the function exceds 100 or 0.
 * Graphic bar of "#" symbols (appart function).
 *
 * Doesn't work the definition of macros
 * */

/*
 * @brief Initializes a percentage integer counter from 0 or 100 (indicated by progressDirection) and it
 * incrementes or decrementes "step" unities each round.
 *
 * @description Starts ...
 * Used to manage loading bars.
 *
 * @param attemptsQtty: quantity of times we want our percentage function to move. In order of the attempts the function
 * will calculate de step to move through the designed values.
 * @param direction Determines direction of the counter.
 *         #PCT_INC: Increasing values, from 0 to 100 increasing values.
 *         #PCT_DEC:  Decreasing values, from 0 to 100 decreasing values.
 * @date 03-2023
 * @author Franco Macén
 * */


void initPercentageInt(int attempts, int direction,int *iPercentage, int* iPercentageStep){
    double dPercentageStep;

    if(direction == 2)
        *iPercentage = 0;
    else
        *iPercentage = 100;

    dPercentageStep = (double)100 / (double)attempts ;
    printf("Porcentaje step en double: %.2f\n", dPercentageStep);

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

    initPercentageInt( 4, 2, &iPercentage, &iPercentageStep);

    for (i = 0; iPercentage > 0; i++){
        printf("%d\n", iPercentage);
        advancePercentage(iPercentageStep, &iPercentage);
        sleep(1);
    }
    return 0;
}
