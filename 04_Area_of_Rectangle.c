// disclaimer : Sushant believes in writing best and efficient program, not writing currect spelling of variables, so you will find some words with no meaming.

//write a program to calculate the area of rectangle 
#include<stdio.h>
int main()
{ 
        //Find the area of a rectangle.
        int side_A, side_B,Area;
        
        printf("Enter first Side of reactangle: ");
        //take input of Side_one
        scanf("%d",&side_A);

        printf("Enter second Side of Reactangle: ");
        //take input of Side_two
        scanf("%d",&side_B); 
       
        // Area of Rectangle
        Area = side_A*side_B;
        printf("The Area of Rectangle: %d",Area);
        return 0;
}