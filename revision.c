//Average of odd number from m to n:
/*#include <stdio.h>
int main()
{
 int m,n,i,sum=0,count=0;
 float avg;
 printf("Enter the value of m: \n");
 scanf("%d",& m); 
 printf("Enter the value of n(n>=m): \n ");
 
 scanf("%d",& n);
 for(i=m;i<=n;i++)
 {
  if(i%2!=0)
   {
    sum+=i;
    count++;
    printf("The sum of no is %d\n",sum);
   }
 }
 if (count == 0)  
   {
    printf("No odd numbers\n");
   }
 else
 {
   printf("The sum of odd no b/w %d \nand %d is %d \n",m,n,sum);
   avg = (float)sum/count;
   printf("The average of odd numbers is %f",avg);
 }
 return 0; 
}
//To find the factorial of a number:

#include <stdio.h>
int main()
{
  int n,factorial,i;
  printf("Enter the value of n: ");
  scanf("%d",& n);
  factorial = 1;
  for(i=1;i<=n;i++)
  { 
    factorial *= i;
    printf("The factorial is %d \n",factorial);
  }
  return 0;
  
}

//Sum and average of n natural numbers:
#include <stdio.h>
void main()
{
  int n,sum,i;
  float avg;
  printf("Enter a number : ");
  scanf("%d",& n);
  sum = 0;
  for(i=1;i<=n;i++)
  { 
    sum+=i;
    
    printf("The sum of numbers is %d\n",sum);
    
  }
  avg = (float)sum/n;
  printf("The avg is %f \n",avg);
  
}
#include <stdio.h>
void main()
{
  int n,sum,i=1;
  float avg;
  printf("Enter a number : ");
  scanf("%d",&n);
  sum = 0;
  while(i<=n)
  { 
    sum+=i;
    avg = (float)sum/n;
    printf("The sum of numbers is %d\n",sum);
    i++;
  }
  printf("The avg is %f \n",avg);
}  */

#include <stdio.h>
void main()
{
  int n,i;
  printf("Enter the number(n): ");
  scanf("%d",& n);
  for (i=2;i<=n/2;i++)
  {
   if (n%i!=0)
   {
    printf("The number is a prime %d\n",n);
    
   }
  }
  printf("The no is not a prime\n");
   
  }
}  