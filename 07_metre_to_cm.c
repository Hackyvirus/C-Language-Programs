#include <stdio.h>
int main()
{
        int metre, centimetre; // variables to store value of metre and centimetre

        printf("Enter the length in Metre: ");
        scanf("%d", &metre); // take input length in metre

        centimetre = metre * 100; // calculate the lenght in centimetre

        printf("The %d metre in centimetre: %d", metre, centimetre); // print out the length in centimetre

        return 0;
}