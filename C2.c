#include<stdio.h>

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d",& num);
    printf("The entered number is %d",num);
}

#include<stdio.h>
void main()
{
    int x,y;
    float p;
    char q;
    printf("Enter 2 integer :\n 1decimal: \n   character: ");
    scanf("%d %d %f %c",&x,&y,&p,&q);
    printf("Entered 1st number is %d \n Entered 2nd num is %d \n Entered decimal is %f \n Entered character is %c ",x,y,p,q);
}

#include <stdio.h>
void main()
{
    int a,b;
    print("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("%d is the greatest\n",a);
    else
        printf("%d is the greatest\n",b);  
        
}
# include <stdio.h>

void main()

{
   int num;
   printf ("Enter the number: ");
   scanf ("%d", & num);
   if (num % 2 == 0 )
   printf ("%d is even \n",num);
   else 
   printf ("%d in odd \n", num);

}
# include <stdio.h>
void main()
{
   int x,y,z;
   printf ("Enter the numbers : \n");
   scanf ("%d %d %d", &x,&y,&z);
   if(x>=y && x>=z)
      printf ("%d is the largest num",x);
   else if (y>= x && y>=z)
      printf ("%d is the largest \n", y);
   else
      printf ("%d is the largest \n", z);
}  

#include <stdio.h>
void main()
{
int num;
printf(" Enter the number: ");
scanf ("%d", & num);
if (num % 5 == 0 && num% 6==0)
    printf ("%d is divisible by 5 and 6", num);
else
    printf ("%d is not divisible by 5 and 6",num);
}    

#include <stdio.h>
void main()
{
int num;
printf ("Enter the number: ");
scanf("%d", & num);
if (num % 6== 0 && num%9!= 0)
     printf("%d is divisible by 6 but not by 9", num);
else if (num%6 !=0 && num%9 == 0)
     printf("%d is not divisible by 6 but divisible by 9",num);
else if (num%6 == 0 && num% 9 == 0)     
     print("%d is divisible both by 6 and 9",num);
else     
     printf("%d is not divisible by 6 and 9",num);     
}     

#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a,b,c: ");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c)
    printf("The given triangle is Equlateral");
else if  (a!=b && b!=c && c!=a) 
    printf("The given triangle is scalene");
else
    printf("The given triangle is Isosceles");    
}    
    