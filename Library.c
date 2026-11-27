#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x=25.5;
    int a=2, b=3;
    
    printf("Square Root of %2f=%2f",x,sqrt(x));
    printf("\n%2f raised to %2f=%2f",a,b,pow(a,b));
    printf("\nCeiling Value of %2f=%2f",x,ceil(x));
    printf("\nFloor Value of %2f=%2f",x,floor(x));
    printf("\nAbsolute Value of %2f=%2f",x,fabs(-x));
    printf("\nNatural Logarithm of %2f=%2f",x,log(x));
}
