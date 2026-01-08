//Basic string game : 
/*#include<stdio.h>
int main()
{
 char name[30];
 printf("Enter a name : ");
 gets(name);
 //scanf("%s",name);
 printf("%.5s\n",name);
 printf("%10.5s",name);
 printf("%s\n",&name[2]);
 puts(name);
 puts(name);
}

#include<stdio.h>
#include<string.h>
int main()
{
 char name[10],count = 0;
 printf("Enter name: \n");
 gets(name);
 count = strlen(name);
 printf("Length of name :%d \n",count);
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
 int l=0,i=0;
 char name[30];
 printf("Name : \n");
 gets(name);
 while(name[i]!='\0')
 {
  l++;
  i++;
 }
 puts(name);
 printf("length = %d",l);
}
