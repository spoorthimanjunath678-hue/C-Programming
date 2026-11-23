#include<stdio.h>
#include<conio.h>
int main()
{
int a=10;
int *p;
p= &a;

printf("Value of A=%d\n",a);
printf("Adress of A=%p\n",&a);
printf("Value of P=%p\n",p);
printf("Value pointed by P=%d\n",*p);
return 0;
}
