#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100],str3[100];
    printf("Enter the first string:\n");
    scanf("%99s",str1);
    printf("\nEnter the second string:\n");
    scanf("%99s",str2);
    printf("\nLength of the first string is %d",(int)strlen(str1));
    strcpy(str3,str2);
    printf("\nCopied string is %s",str3);
    strcat(str1, str3);
    printf("\nConcatenated string is %s", str1);
    printf("\nCompared string is %d ",strcmp(str1,str2));
    return 0;
}
