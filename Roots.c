#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1, r2, d;
    int choice;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    choice=1;
    else if (d==0)
    choice=2;
    else 
    choice=3;
    
    switch(choice)
    {
        case 1:
        r1=(-b+ sqrt(d))/(2*a);
        r2=(-b- sqrt(d))/(2*a);
        printf("Roots are real and different.");
        printf("\nRoot 1=%f\n \nRoot 2=%f",r1,r2);
        
        case 2:
        r1=(-b/(2*a));
        printf("Roots are real and equal.");
        printf("\nRoots=%f",r1);
        
        case 3:
        printf("Roots are imaginary");
    }
    return 0;
}
