// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.


//wrtie a program to convert Kilometer to Meter
#include<stdio.h>
int main()
{ 
        int KM,MTR;
        printf("Enter the Length in KM: ");
        scanf("%d",&KM);
        MTR = KM*1000;
        printf("The total length in Metre: %d m",MTR);
        return 0;
}