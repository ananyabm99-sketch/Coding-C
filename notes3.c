#include<stdio.h>
int main()
{
  int num[100],n,i,j;
  printf("enter a number of elements(1-100):\n");
  scanf("%d",&n);
  printf("enter each element of number:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",& num[i]);
  //printf("The entered elements are:\n");
  }
  for(i=0;i<n;i++)
  {
    printf("num[%d]=%d\n",i,num[i]);
    for (j=2;j<=num[i]/2;j++)
    {
      if(num[i]%j==0)
        {
        printf("%d is not a prime\n",num[i]);
        break;
        }
    }
    if(j>num[i]/2)
     printf("%d is prime\n",num[i]);
  }
  return 0;
}
include <stdio.h>
int main()
{
 int i,num;
 printf("Enter a number: \n");
 scanf("%d",& num);
 if (num>=5 && num<=50)
 {
 for(i=2;i<=num/2;i++)
 {
 if(num%i==0)
  {
   printf("Not prime\n");
   break;
  } 
 }
 if(i>num/2)
 printf("Prime");
 return 0;
 }
 else
   printf("Invalid input");
 return 0;  
   
}

#include <stdio.h>
int main()
{
 int i,n,s=0;
 printf("Enter the number : \n");
 scanf("%d",&n);
 while(n!=0)
 {
  i=n%10;
  s=(s*10)+i;
  n=n/10;
 }
 printf("Reverse is %d\n",s);
 return 0;
 
}