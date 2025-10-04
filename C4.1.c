#include <stdio.h>
void main()
{
  int i,n;
  printf("Enter the no which is >= 5 : ");
  scanf("%d",& n);
  for (i=5;i<=n;i++)
   { 
     if(i%6==0 && i%5!=0)
        {
        printf("The number %d is divisible by 6 but not by 5 \n",i);
        }
     else
        {
        printf("Sorry\n");
        }
   }
}


