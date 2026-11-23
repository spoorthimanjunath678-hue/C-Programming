#include<stdio.h>
#include<conio.h>
int main()
{
    int m1, m2, m3,m4,m5, total;
    float avg;
    char name[50];
    printf("STUDENT MARKSHEET\n");
    
    printf("Enter student Name:\n");
   fgets(name, sizeof(name), stdin);
    printf("\nEnter marks in 5 subjects\n");
    printf("Samskrutham:");
    scanf("%d",&m1);
    printf("\nEnglish:");
    scanf("%d",&m2);
    printf("\nC Programmimg:");
    scanf("%d",&m3);
    printf("\nComputer Fundamentals:");
    scanf("%d",&m4);
    printf("\nMathematics:");
    scanf("%d",&m5);

    printf("\nRESULT\n");
    
    printf("\nStudent Name: %s",name);
    total=m1+m2+m3+m4+m5;
    printf("\nTotal marks=%d",total);
    avg=total/5;
    printf("\nPercentage: %2f",avg);
    if(avg>=85)
    printf("\nCongratulations %s!!!\n You have passed with Distinction.",name);
    else if (avg>=60)
    printf("\nCongrtulations %s!!!\n You have passed with First Class.",name);
    else if(avg>=45)
    printf("\nCongratulations %s!!!\n You have passed with Second Class.",name);
    else if (avg>=33)
    printf("\nCongratulations %s!!!\n You have Passed.",name);
    return 0;
}
