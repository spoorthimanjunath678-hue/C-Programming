#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp, digit;
    int sum=0, reverse=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        sum=sum+digit;
        n=n/10;
    }
    printf("\nSum of the numbers is %d",sum);
    printf("\nReverse of the number is %d",reverse);
    if (temp==reverse)
    {
        printf("\n The number is a Palimdrome.");
    }
    else
    {
        printf("\nThe number is not a Palindrome.");
    }
    return 0;
}
