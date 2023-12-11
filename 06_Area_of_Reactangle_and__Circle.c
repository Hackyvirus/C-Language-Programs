// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

// write a program to calculate area and curcumference of circle and rectangle 
#include <stdio.h>
int main()
{
        int sideA, sideB, Rad, cercumferenceofreactangle, Areaofreactangle, cercumferenceofcircle, areaofcircle;
        printf("Enter the First Side of Reactangle: "); // take input of side one of rectangle
        scanf("%d", &sideA);

        printf("Enter the Second Side of Reactangle: "); // take input of side two of rectangle
        scanf("%d", &sideB);

        printf("Enter the Radius of Circle: "); // take input of radius of cicle
        scanf("%d", &Rad);

        Areaofreactangle = sideA * sideB; // calculate the area of reactangle

        cercumferenceofreactangle = 2 * (sideA + sideB); // calculate the cercumfercne of rectangle

        cercumferenceofcircle = 2 * 3.14 * Rad; // calculate the cercumference of circle

        areaofcircle = 3.14 * Rad * Rad; // calculate pthe area of circle

        printf("The Ara of Rectangle: %d\n", Areaofreactangle);
        printf("The Cercumference of Rectangle: %d\n", cercumferenceofreactangle);
        printf("The Area of Circle: %d\n", areaofcircle);
        printf("The Cercumference of Circle: %d\n", cercumferenceofcircle);
        return 0;
}