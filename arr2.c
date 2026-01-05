#include<stdio.h>
int main()
{
 int a[10],i,n;
 printf("Enter the size of an array: \n");
 scanf("%d",&n);
 printf("Enter each element of an array : \n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++) 
 {
  if(a[i]%2==0)
   printf("Even -%d\n",a[i]);
  else
   printf("Odd - %d\n",a[i]) ;
 }
 return 0;
}

#include<stdio.h>
int main()
{
 int a[10],i,n,even =0,odd=0;
 printf("Enter the size of an array: \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
   even += 1;
  else
   odd += 1; 
 }
 printf("Even = %d \nOdd = %d",even,odd);
}


#include<stdio.h>
int main()
{
 int a[5],b[5],i,n1,n2,sum[5];
 printf("Enter the size of an Array1: \n");
 scanf("%d",&n1);
 printf("Enter each element of an Array1:\n");
 for(i=0;i<n1;i++)
  scanf("%d",&a[i]);
 printf("Enter the size of an Array2 :\n");
 scanf("%d",&n2);
 printf("Enter each element of an Array1: \n");
 for(i=0;i<n2;i++)
  scanf("%d",&b[i]);
 for(i=0;i<n1;i++) 
  sum[i]= a[i]+b[i];
 for(i=0;i<n1;i++) 
  printf("Sum[%d] = %d\n",i,sum[i]) ;
}