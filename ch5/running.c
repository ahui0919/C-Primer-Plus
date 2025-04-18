// running.c -- A useful program for runners
#include <stdio.h>
#include <stdlib.h>

// seconds in a minute
const int S_PER_M = 60;
// seconds in an hour
const int S_PER_H = 3600;
// miles in a kilometer
const double M_PER_K = 0.62137;

int main(int argc, char **argv)
{
    // distance run in km and in miles
    double distk;
    double distm;
    // average speed in mph
    double rate;
    // minutes and seconds of running time
    int min;
    int sec;
    // running time in seconds only
    int time;
    // time in seconds for one mile
    double mtime;
    // minutes and seconds for one mile 
    int mmin;
    int msec;

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    // %lf for type double
    scanf("%lf", &distk);

    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);

    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    // converts time to pure seconds
    time = S_PER_M * min + sec;
    // converts kilometers to miles
    distm = M_PER_K * distk;
    // miles per sec x sec per hour = mph
    rate = distm / time * S_PER_H;

    // time/distance = time per mile
    mtime = (double) time /distm;
    // find whole minutes
    mmin = (int) mtime / S_PER_M;
    // find remaining seconds
    msec = (int) mtime % S_PER_M;
    
    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
        distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\n Your average speed was %1.2f mph.\n", msec, rate);

    return EXIT_SUCCESS;
}