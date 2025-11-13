#include<stdio.h>
int main()
{
   int num[100],n,i,counteven=0,countodd=0;
   printf("enter a number < 100:\n");
   scanf("%d",&n);
   printf("enter each element of number:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&num[i]);
   printf("The entered elements are:\n");
   }
   for(i=0;i<n;i++)
    {
     printf("num[%d]=%d\n",i,num[i]);
     if(num[i]%2==0)
     {
       counteven+=1;
     }
     else
     {
        countodd+=1;
     }
    }
     printf("The number of odd numbers is %d\n",countodd);
     printf("The number of even numbers is %d\n",counteven);
     if(counteven>countodd)
        {
          printf("even numbers are more\n");
        } 
     else if(counteven<countodd)
        {
        printf("odd numbers are more\n");
        } 
     else
        {
        printf("odd numbers=even numbers\n");
        }
     return 0;
}