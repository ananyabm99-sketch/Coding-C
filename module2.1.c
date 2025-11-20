//getchar()
/*#include <stdio.h>
int main()
{
  char x;
  printf("Enter a letter : \n");
  x = getchar();
  printf("You entered %c",x);
  return 0;
}

//putchar()
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a letter : \n");
  x = getchar();
  printf("Output is :");      //format specifier and putchar won't work together
  putchar(x);
  return 0;
}
//gets() and puts()
#include <stdio.h>
int main()
{
 char x[100];
 printf("Enter a sentence : \n");
 gets(x);
 printf("Your sentence is :\n");
 puts(x);
 return 0;
}

#include <stdio.h>
int main()
{
  int a=10;
  float b=12.34;
  char c='A';
  char x[]="Ananya";
  printf("Integer: %d\n",a);
  printf("Float : %.2f\n",b);
  printf("Character : %c\n",c);
  printf("String : %s\n",x);
  printf("Width : %10d\n",a);
  printf("Left align : %-5d\n",a);
  printf("new line : Hello\nAnanya\n");
  printf("Tab space : A\t B\t C");
  return 0;
}

//uppercase && lowercase
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a letter: \n");
  scanf("%c",&x);
  if(x>='A' && x<='Z')
     printf("The letter is in uppercase\n");
  else
     printf("The letter is not a uppercase\n");
  return 0;     
}

#include<stdio.h>
int main()
{
  int year;
  printf("Year : \n");
  scanf("%d",& year);
  if(year%400==0 || year%4==0 && year%100!=0)
      printf("Leap year");
  else
      printf("Not a leap year");   
  return 0;
}
*/
#include <stdio.h>
int main()
{
  char x;
  printf("Enter a letter : \n");
  scanf("%c",&x);
  switch(x)
  {
   case'a':case'e':case'i':case'o':case'u':
   case'A':case'E':case'I':case'O':case'U':
     printf("Vowel");
     break;
     default:
     printf("Consonant");
     
  }
  return 0;
}