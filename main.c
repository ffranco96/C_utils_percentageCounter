#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "percentageCounter.h"

/*
 * Status: To develop-> modification of double value of functions to an integer value for the case of the integer counter.
 * Then program another one that is prepared for double values.
 * Increasing and decreasing values.
 * Correction of errors in case the function exceds 100 or 0.
 * Graphic bar of "#" symbols (appart function).
 *
 * Doesn't work the definition of macros
 * */

int main()
{   int i = 0;
    int iPercentage = 0, iPercentageStep=0;

    initPercentageInt( 4, PCTG_DECR, &iPercentage, &iPercentageStep);

    for(i = 0; iPercentage > 0;i++){
        printf("%d\n", iPercentage);
        advancePercentage(iPercentageStep, &iPercentage);
        // sleep(1);
    }

    return 0;
}
