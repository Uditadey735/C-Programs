//WAPC to input the radius and height of a cylinder. Calculate the volume of the cyinder

#include<stdio.h>
int main()
{
    float radius,height,volume;
    printf("\nEnter the radius of the cylinder:");
    scanf ("%f",&radius);
    printf("\nEnter the height of the cylinder:");
    scanf("%f",&height);
    volume =(3.14*radius*radius*height);
    printf("\nThe volume of the cylinder is %0.2f:", volume);
    return 0;
}
    
