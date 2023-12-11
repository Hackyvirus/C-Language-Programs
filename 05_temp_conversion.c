// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

// write a program to Convert tempreture from Fahrenteit into Centigrade
#include <stdio.h>
int main()
{
        int Fahrenheit, Centigrade; // Declaring Variable to store tempreture

        printf("Enter the tempreture in Fahrenheit: "); // take input as Fahrenhiet
        scanf("%d", &Fahrenheit);

        Centigrade = (Fahrenheit - 32) * 5 / 9; // Convert Fahrenhiet into Centigrade

        printf("The Conversion of Fahrenheit into Centigrade: %d", Centigrade);

        return 0;
}