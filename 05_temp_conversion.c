#include <stdio.h>
// Conversion of Fahrenteit into Centigrade
int main()
{
        int Fahrenheit, Centigrade; // Declaring Variable to store tempreture

        printf("Enter the tempreture in Fahrenheit: "); // take input as Fahrenhiet
        scanf("%d", &Fahrenheit);

        Centigrade = (Fahrenheit - 32) * 5 / 9; // Convert Fahrenhiet into Centigrade

        printf("The Conversion of Fahrenheit into Centigrade: %d", Centigrade);

        return 0;
}