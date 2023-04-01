//
// Created by fraan on 1/4/2023.
//

#ifndef PERCENTAGECOUNTER_PERCENTAGECOUNTER_H
#define PERCENTAGECOUNTER_PERCENTAGECOUNTER_H

#define PCTG_INCR 2
#define PCTG_DECR 3

/*
 * @brief Initializes a percentage counter from 0 or 100 (indicated by progressDirection) and it
 * incrementes or decrementes "step" unities each round.
 *
 * @description Starts ...
 * Used to manage loading bars.
 *
 * @author Franco Macén
 * */
void advancePercentage(int iPercentageStep, int *iPercentage);

/*
 * @brief Initializes a percentage integer counter from 0 or 100 (indicated by progressDirection) and it
 * incrementes or decrementes "step" unities each round.
 *
 * @description Starts ...
 * Used to manage loading bars.
 *
 * @param rounds: quantity of times we want our percentage function to move. In order of the rounds the function
 * will calculate de step to move through the designed values.
 * @param direction Determines direction of the counter.
 *         #PCTG_INCR: Increasing values, from 0 to 100 increasing values.
 *         #PCTG_DECR:  Decreasing values, from 0 to 100 decreasing values.
 * @date 03-2023
 * @author Franco Macén
 * */
void initPercentageInt(int rounds, int direction,int *iPercentageStart, int* iPercentageStep);

#endif //PERCENTAGECOUNTER_PERCENTAGECOUNTER_H
