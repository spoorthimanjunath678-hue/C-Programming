#include<stdio.h>
#include<conio.h>
int main()
{
    float pi=3.14;
    float r;
    float area,circumference;
    printf("Enter the value for radius: \n");
    scanf("%f",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("Area of the given circle is %f\n",area);
    printf("Circumference of te given circl is %f\n",circumference);
    return 0;
    
}
