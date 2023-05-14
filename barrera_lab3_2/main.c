#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Author: Alyana Barrera
Assignment: Lab 3 Problem 2
Due date: January 30th

Overview: This is part 2 of lab 3. This lab will help you find the temperature given an elasped time since a power
failure. The program will use the equation T = ((at^2)/(t+b)) + t0. The program will ask the user for how long it
has been since power failure and the starting temperature. After inputs and calculation the program will print results
in a sentence sharing the hours, minutes, initial temperature, and degrees celcius.

Known Issues:
1. Error in calculating the correct temperature. I think it is the way I made hours and minutes but I can't seem to
be able to figure it out.
*/

int main()
{
    //declare variables
    double startTemp, temp;
    int hours, time, minutes;

    //ask for user to input how long it has been since the start of the power failure and starting temperature
    printf("Please enter how long it has been since the start of the power failure in whole minutes: ");
    scanf("%d", &time);
    printf("Please enter the starting temperature: ");
    scanf("%lf", &startTemp);

    //calculations for the hours, minutes, and temperature
    hours = time / 60;
    minutes = time % 60;
    temp = ((4 * (pow(hours, 2)))/(hours+2)) + startTemp;

    //print output sentence
    printf("\nAfter %d hours and %d minutes without power, a freezer with initial temperature of %.2f degrees Celsius will increase to %.2f degrees Celcius \n", hours, minutes, startTemp, temp);

    printf("\nProgram written by Alyana Barrera.\n");
    return 0;
}
