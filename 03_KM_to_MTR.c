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