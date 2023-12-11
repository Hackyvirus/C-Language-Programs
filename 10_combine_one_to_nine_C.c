// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

// write a program to do everything from program no 1 to 9 
#include <stdio.h>
int main()
{
        float KM, MTR, CM, MM;                      // declaring variable for storing length
        int sideA, sideB, Rad;                      // declaring variable for storing lenght rectangle and circle
        int Centigrade, Fahrenheit;               // declaring variable to store tempreture
        int AreaOFC, areaOFR, CurcumOFC, CurcumOFR; // declaring variable to store area and circumference of cicle and rectangle
        printf("Hello Dear\n");
        printf("Enter the Length in Kilometre: "); // take input from user and store the length in Kilometre
        scanf("%f", &KM);

        printf("Enter the legth of rectangle both sides and Radian of circle: "); // take input from user and store the length of rectangle's both sides
        scanf("%d %d %d", &sideA, &sideB, &Rad);

        printf("Enter the Tempreture in Centigrade: "); // take input from user and store the tempreture in Centigrade
        scanf("%d", &Centigrade);

        // convert KM to Metre
        MTR = KM * 1000;

        // Convert Metre to Centimetre
        CM = MTR * 100;

        // Convert Centimetre to Milimetre
        MM = CM * 10;

        // Convert Centigrade to Fahrenheit
        Fahrenheit = (Centigrade * 9 / 5) + 35;

        // calculate area of circle
        AreaOFC = 3.14 * Rad * Rad;

        // Calculate area of Reactangle
        areaOFR = sideA * sideB;

        // Calculate circumference of circle
        CurcumOFC = 2 * 3.14 * Rad;

        // Calculate the circumference of rectangle
        CurcumOFR = 2 * (sideA + sideB);

        printf("The %f Km in Metre is: %f\nThe %f Km in Centimetre is: %f\nThe %f Km in Milimetre is: %f\n", KM, MTR, KM, CM, KM, MM); // print out the length conversion from KM to other

        printf("The %d Centigrade into Fahrenheit is: %d\n", Centigrade, Fahrenheit); // Print out the tempreture from Centigrade to fahrenheit

        printf("The circumference of Circle is: %d\n", CurcumOFC);    // print out circumference of circle
        printf("The circumference of Rectagnle is: %d\n", CurcumOFR); // print out circumference of Rectangle
        printf("The Area of Rectangle is: %d\n", areaOFR);            // print out area of rectagnle
        printf("The area of Circle: %d\n", AreaOFC);                  // print out area of circle

        return 0;
}