/*#include<stdio.h>
int main()
{
 int a[3][3],i,j,sum=0;
 printf("Enter each element of 2D array: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Matrix is \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",a[i][j]);
   sum+=a[i][j];
  }
  printf("\n");
  
 }
 printf("Sum is %d\n",sum);
 return 0;
}

#include<stdio.h>
int main()
{
 int a[2][2],i,j;
 printf("Enter each element of 2D array: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 } 
 printf("The matrix is : \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d \t",a[i][j]);
  }
  printf("\n");
 } 
 printf("Transpose is ;\n");
 
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d\t",a[j][i]);
  }
  printf("\n");
 }
}

//sum of individual row and column
#include<stdio.h>
int main()
{
 int a[2][3],i,j,sumrow,sumcol;
 printf("Enter each element of an array : \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<2;i++)
 {
  sumrow = 0;
  for(j=0;j<3;j++)
  {
   sumrow += a[i][j];
  }
 }  
 for(j=0;j<3;j++) 
 {
  sumcol =0;
  for(i=0;i<2;i++)
  {
   sumcol += a[i][j];
   
  }
 } 
 printf("Sum of Rows = %d\nSum of columns = %d\n",sumrow,sumcol);
 
}*/
//sum of individual row and column
//This is wrong
#include<stdio.h>
int main()
{
 int a[3][2],i,j,sr,sc;
 printf("Enter each element of 2D array: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nThe matrix is : \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d \t",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<3;i++)
 {
  sr=0;
  sc=0;
  for(j=0;j<2;j++)
  {
   sr+=a[i][j];
   sc+=a[j][i];
  }
  printf("Sum_row = %d,Sum_column = %d\n",sr,sc);
  
 }
}