#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,check;
    
    printf("Enter the limit:");
    scanf("%d",&n);
    
    for(i=2; i<=n; i++)
    {
        check=0;
        for(j=2; j<=i/2;j++)
        {
            if (i%j==0)
            {
            check=1;
            break;
            }
        }
    
      if(check==0)
      printf("%d",i);
    }
    return 0;
    
}
