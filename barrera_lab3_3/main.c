#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Author: Alyana Barrera
Assignment: Lab 3 Problem 3
Due date: January 30th

Overview: This is part 3 of lab 3. This lab will help you find the volume of a spherical tank given equation
v = (pi*h^2)/((3R-h)/3). The program will ask user to input the height of water in tank and the radius of tank.
After inputs and calculation the program will print results in a sentence sharing the radius, height, and volume
in cubic meters.

Known Issues:
1. The answer based on the lab 3 file is incorrent but is correct when I check my calculator for the answer. Is it
wrong?
The depth of tank would be 2.1054 with radius 3 for 32 cubic meters.
*/

int main()
{
    //declare variables (have pie capitalized and establish constant value)
    double height, radius, volume;
    const double PI = 3.141592653589793;

    //get user input for water height and radius of tank
    printf("Please enter water height: ");
    scanf("%lf", &height);
    printf("Please enter tank radius: ");
    scanf("%lf", &radius);
    printf("\n");

    //calculation for volume of tank
    volume = (PI * pow(height, 2)) * (((3 * radius)-height) / 3);

    //output statement so that user can see radius, height, and calculated volume
    printf("The volume of water in a tank with radius %.1f and water height %.1f is %.2f cubic meters \n", radius, height, volume);
    printf("\nProgram written by Alyana Barrera\n");
    return 0;
}
