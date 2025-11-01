/*#include <stdio.h>
int main()
{ 
  int i,num;
  printf("Enter the value of num: ");
  scanf("%d",& num);
  for (i=2;i<=num/2;i++)
  { 
    if (num%i==0)
    { 
     printf("The num is not a prime ");
     break;
    }
  }
  printf("The num is prime");
  return 0;
}*/
/*#include <stdio.h>
void main()
{ 
  int num,s=0,r;
  printf("Enter the number: ");
  scanf("%d",& num);
  while (num!=0)
  {
    r= num%10;
    s = (s*10) + r;
    num=num/10;
  }  
printf("%d \n",s);
}*/

#include <stdio.h>
void main()
{ 
  int temp=num,count;
  printf("Enter the number: ");
  scanf("%d",& temp);
  count = 0; 1st
  while (temp!=0)
  {
  
    temp = temp/10;
    count++;
    
  }  
printf("The no of digits is %d \n",count);
}