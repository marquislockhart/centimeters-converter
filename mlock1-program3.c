//Marquis Lockhart - CSCI 1110-01
//Program 2 - Converting Centimeters to Feet and Inches

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL 0
#define CENT TO INCH 2.54

int main(void)
{
    int centimeters=0;
    int inches=0;
    int feet=0;

    printf("Marquis Lockhart - CSCI 1110-01\n");
    printf("Convert Centimeters to Inches and Feet\n");
    while (1)
    {
        printf("Enter Your Centimeter Input"); //Make input for user to enter
        scanf("%i",&centimeters);

        if(centimeters==SENTINEL){break;}
        if(centimeters<0)
        {
            printf("invalid centimeter...");
            printf("re-enter");
            continue;
        }
        //Conversions for calculations
        inches=centimeters/2.54;
        feet=inches/12;

        //Outputs to appear on screen
        inches=inches%12;
        printf("Centimeters     Feet     Inches\n");
        printf("     %i           %i        %i\n",centimeters,feet,inches);
    }
    return 0;
}
/*Marquis Lockhart - CSCI 1110-01
Convert Centimeters to Inches and Feet
Enter Your Centimeter Input254
Centimeters     Feet     Inches
     254           8        3
Enter Your Centimeter Input100
Centimeters     Feet     Inches
     100           3        3
Enter Your Centimeter Input8
Centimeters     Feet     Inches
     8           0        3
Enter Your Centimeter Input4
Centimeters     Feet     Inches
     4           0        1
Enter Your Centimeter Input-54
invalid centimeter...re-enterEnter Your Centimeter Input0

Process returned 0 (0x0)   execution time : 168.105 s
Press any key to continue.*/
