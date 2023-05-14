#include <stdio.h>
#include <stdlib.h>

/*
Author: Alyana Barrera
Assignment: Lab 3 Problem 1
Due date: January 30th

Overview: This is part 1 of lab 3. This lab will help you find pressure of a gas using the equation PV = nRT. The
program will ask user input for volume, moles of the gas, and the temperature to help calculate the pressure in
atm. After inputs and calculation the program will print results in columnar format with volume, moles, temperature,
and pressure as the header names and the numbers of each under the header names.

Known Issues:
None.
*/

int main()
{
    //list out variables of the equation given
    double p, v, n, t;

    //set r to 0.08206
    double r = 0.08206;

    //ask for user to enter volume in mL, moles of gas, and temperature in Kelvin. Have code scan in answers
    printf("Please enter the volume of the gas in mL: ");
    scanf("%lf", &v);
    printf("Please enter the number of moles of the gas: ");
    scanf("%lf", &n);
    printf("Please enter the temperature in Kelvin: ");
    scanf("%lf", &t);
    printf("\n");

    //Conver volume to liters and calculate pressure
    v = v * 0.001;
    p = (n * r * t) / v;

    //output statements in columnar format making sure it looks all equal in spacing
    printf("%1s%10s%19s%17s\n", "Volume(L)", "Moles", "Temperature(K)", "Pressure(atm)");
    printf("%7.3f%12.2f%15.3f%16.3f\n", v, n, t, p);

    printf("\nProgram written by Alyana Barrera.\n");
    return 0;
}
