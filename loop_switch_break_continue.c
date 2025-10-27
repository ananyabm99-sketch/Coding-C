#include <stdio.h>
void main()
{
 float temperature;
 printf("Enter Temperature: \n");
 scanf("%f",& temperature);
 if (temperature <= 20){
  printf("ware a sweater\n");
 }
 else if (temperature >= 20 && temperature<=30){
  printf("Normal \n");
 }
 else{
  printf("Very High temperature!");
 }
}
#include <stdio.h>
void main()
{
 int i=1;
 while (i<=10){
 printf("Ananya %d \n",i);
 i++;
 }
}
#include <stdio.h>
void main()
{
 int i;
 float num,sum=0;
 for (i=0;i<=10;i++)
 {
  printf("\nEnter the number %d: \n",i+1);
  scanf("%f",&num);
  if (num <0)
  {
   continue;         // break ,continue
  }
  sum+=num;
  printf("Sum : %f",sum);
  
 }
 
 
}

//CALCULATOR
#include <stdio.h>
void main()
{
 int a,b,choice;
 printf("Enter the value of a: \n");
 scanf("%d",& a);
 printf("Enter the value of b: \n");
 scanf("%d",& b);
 printf("1.Add\n2.Sub\n");
 printf("Enter your choice : \n");
 scanf("%d",& choice);
 switch(choice)
 {
  case 1:
   printf("%d",a+b);
   break;
  case 2:
   printf("%d",a-b);
   break;
  default:
  printf("Invalid choice !");
  
   
  
 }
 
}
