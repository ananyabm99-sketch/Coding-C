#include<stdio.h>
int main()
{
 int a[2][2],b[2][2],i,j,k,c[2][2],sum;
 printf("Enter each element of an array1: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Matrix A: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d \t",a[i][j]);
  }
  printf("\n");
 }
 printf("Enter each element of an array2: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("Matrix B : \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
 printf("Multiplication of two Matrix: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   sum=0;
   for(k=0;k<2;k++)
   {
    sum+=a[i][k]*b[k][j];
    
   }
   c[i][j]=sum;
   printf("%d\t",c[i][j]);
   
  }
  printf("\n");
 }
 
}