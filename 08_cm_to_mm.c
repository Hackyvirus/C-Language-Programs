// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

// write a program to convert centimetre into milimitre
#include <stdio.h>
int main()
{
        int CM, MM; // create variables to store the values

        printf("Enter the Length in Centimetre: "); // take input from the user
        scanf("%d", &CM);

        MM = 10 * CM; // calculate the lenght in Milimeter

        printf("The %d in Centimetre: %d", CM, MM);
        return 0;
}