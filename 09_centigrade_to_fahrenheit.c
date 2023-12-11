// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

// Write a program to convert centigrade
#include <stdio.h>
int main()
{
        float centigrade, Fahreinheit; // creating variables to store temp values

        printf("Enter the value of Temp in centigrade : "); // take input from user
        scanf("%d", &centigrade);

        Fahreinheit = (centigrade * 9 / 5) + 35; // calculate the tempreture in
        return 0;
}