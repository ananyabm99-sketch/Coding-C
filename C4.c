//Area and circumference of a circle
#include <stdio.h>
void main()
{
 float r,area,c;
 printf("Enter the value of radius : \n ");
 scanf("%f",&r);
 area =( 3.14 *(r * r));
 printf("The area of circle is %f \n",area);
 c = ( 2*3.14*r );
 printf("The circumference is %f \n",c);
 
}

#include <stdio.h>
void main()
{
  float unit,amount;
  printf("Enter the number of unit consumed : ");
  scanf("%f",& unit);
  amount = (unit * 7 * 1.05);
  printf("%f",amount);
}

# include <stdio.h>
void main()
{
  float unit,amount;
  printf("Enter no of units consumed : ");
  scanf("%f",& unit);
  if (unit >=100) 
      { amount = ((99*5)+((unit-99)*7)*1.05);
     printf("The amount is %f \n",amount);
       }
  else
     {
     amount = (unit * 5*1.05);
     printf("The amount is %f \n",amount);
     }
}

