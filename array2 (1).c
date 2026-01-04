/*
#include<stdio.h>
void main()
{
 int a[10],i,n;
 printf("Enter the size of an Array: \n");
 scanf("%d",&n);
 printf("Enter each element of an array : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 printf("a[%d]=%d\n",i,a[i]);
 }
}

#include<stdio.h>
void main()    
{
 int a[15],i,n,sum=0,avg;
 printf("Enter the size of an array : \n");
 scanf("%d",&n);
 printf("Enter each element of an array: \n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 sum += a[i];
 }
 avg=sum/n;
 printf("Sum = %d and Average = %d",sum,avg);
}
*/
#include<stdio.h>
int main()
{
 int a[10],i,n,key,found =0;
 printf("Enter the size of an Array: \n");
 scanf("%d",&n);
 printf("Enter each element of an Array: \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the key to search : \n");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if (a[i]==key)
  {
   found=1;
   break;
  }
 }
 if (found==1)
  printf("Entered number found in an Array\n");
 else
  printf("Not found\n");
 return 0;
}

