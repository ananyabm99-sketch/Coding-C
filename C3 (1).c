#include <stdio.h>
void main()
{ 
  int i,n;
  printf("Enter the number : \n");
  scanf("%d",&n);
  for (i=5;i<=n;i++)
    {
      if (i%6==0 && i%5!=0)
         printf("%d is divisible by 6 & not divisible by 5 \n",i);
      
    }
    
}

#include <stdio.h>
int main()
{
 int i,n;
 i=1;
 printf("Enter the value of num: \n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
    {
    printf("%d \n",i);
    }
    return 0;
}
#include <stdio.h>
int main()
{
   int x,y,i;
   printf("Enter the value of x & y i,e x>=y \n");
   scanf("%d %d",&x,&y);
   for (i=x;i>=y;i--)
   {
     if (i%2==0)
         printf("%d is even \n",i);
     else
         printf("%d is odd \n",i);
   }
}
#include <stdio.h>
int main()
{
  int i;
  for(i=5; i<=50; i+=2)
     {
       printf("%d \n",i);
       
     }
     return 0;
}
#include <stdio.h>
#include <maths.h>
int main()
{
  float a,b,c,discriminant,root1,root2,realpart,imaginory_part;
  scanf("%f %f %f ",&a,&b,&c);
  discriminant = b*b - 4*a*c;
  if (discriminant > 0)
    { 
    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);
    printf("Roots are real and distinct\n")
    printf("Root1 = %.2f,Root2 = %.2f \n,root1,root2");
    
    }
    else if (discriminant == 0)
    {
     root1 = root2 = -b/(2*a);
     printf ("Roots are real and equal\n")
     printf("Root1 = Root2 = %.2f \n")
    }
    else
    {
      realpart = -b/(2*a);
      imaginary_part = sqrt(-discriminant)/(2*a);
      printf("Roots are imaginary.\n");
      printf("Root1 =%.2f+%.2fi,Root2 = %.2f")
    }
}    