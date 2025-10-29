#include <stdio.h>
#include <math.h>
int main()
{
 float a,b,c;
 float discriminant,root1,root2,real_part,imaginary_part;
 printf("Enter the values of a,b,c: \n");
 scanf("%f %f %f",&a,&b,&c);
 discriminant = (b*b)-(4*a*c);
 if (discriminant > 0)
   {
   root1 = (-b+sqrt(discriminant))/(2*a);
   root2 = (-b-sqrt(discriminant))/(2*a);
   printf("Real and distinct \n");
   printf("Root1 is %f \n",root1);
   printf("Root2 is %f \n",root2);
   
   }
 else if(discriminant==0)
   { 
   root1 = root2 =-b/(2*a);
   printf("Real and Equal \n");
   printf("Root1 and Root2 is %f \n",root1);
   }
 else
   {
   real_part = -b/(2*a);
   imaginary_part = sqrt(-discriminant)/(2*a);
   printf("The roots are complex: \n");
   printf("Root1= %.2f + %.2fi \n",real_part,imaginary_part);
   printf("Root2 = %.2f - %.2fi",real_part,imaginary_part);
   } 
   return 0;
}
#include <stdio.h>
int main()
{
  int num,sum,rem,temp;
  printf("Enter the number: \n");
  scanf("%d",& sum);
  temp = num;
  sum = 0;
  while (num!=0)
  {
    rem = num%10;
    sum = sum+rem;
    
  }
  printf("The sum of digits of %d number is %d\n",temp,sum);
  
}
#include <stdio.h>
void main()
{
 int n,i=1,sum;
 float avg;
 printf("Enter the value of n: \n");
 scanf("%d",& n);
 sum = 0;
 while(i<=n)
 {
   sum+=i;
   printf("The sum is : %d \n",sum);
  
   avg = (float)sum/n;
   
   i++;
   
 }
 printf("The  is avg : %f \n",avg);
}
{
  int i=1,n,factorial;
  printf("Enter the value of n : \n");
  scanf("%d",& n);
  factorial = 1;
  while(i<=n)
  { 
    factorial *= i;
    printf("The factorial is : %d \n",factorial);
    i++;
  }
}
#include <stdio.h>
int main()
{ 
 int m,n,i;
 float avg,sum=0,count=0;
 printf("Enter the value of m : ");
 scanf("%d",& m);
 printf("Enter the value of n (n>=1): ");
 scanf("%d",& n);
 for (i=m;i<=n;i++)
  {
    if(i%2!=0)
   { 
    sum+=i;
    count++;
    printf("%f \n",sum);
   }
  } 
 if (count == 0)
 {
   printf("no odd numbers");
 }  
 else
 {
    avg = sum/count;
    printf("The sum of odd number is %f \n",sum);
    printf("average is %f \n",avg);
    
 }
  return 0;
   
        
 
}
