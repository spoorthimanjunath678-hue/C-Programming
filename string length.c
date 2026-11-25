#include<stdio.h>
int main()
{
    int i=0, count=0;
    char str[100];
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    while(str[i] !='\n' && str[i]!='\0')
    {
        i++;
        count++;
    }
    printf(" Length of the String is %d",count);
    return 0;
    
}
