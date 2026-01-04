
#include<stdio.h>
int main()
{
  int a=10;
  int *p;
  p=&a;
  printf("a=%d\n",a);
  printf("add a = %d\n",&a);
  printf("add pointers = %d\n",p);
  printf("pointers = %d\n",*p);
}

#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int *p;
 p=&a;
 printf("Add = %d\nvalue = %u\n",*p,p);
 p++;
 printf("After p++:\nAdd =%d\nvalue =%u\n",*p,p);
 p=p+2;
 printf("After p+=2\nAdd = %d\nvalue =%u\n",*p,p);
 p--;
 printf("After p--\nAdd = %d\nvalue =%u\n",*p,p);

}

#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10]={1,2,3,4,5,6,7};
 int *p,i,n=0;
 p=a;   //p=a,   p=&a[0]
 for(i=0;i<4;i++)
 {
//  n++;
//  printf("a[%d]=a[%d]\n",n,i);
  printf("%d\t",(void*)a[i]);
  printf("%d\n",(void*)&a[i]);
  
  printf("%d\t",(void*)*p);
  printf("%d\n",(void*)p);
  p++;
 }
 getch();
}

#include<stdio.h>
void swap(int,int);
int main()
{
 int a=10,b=2;
 printf("Before\n");
 printf("a=%d\t b=%d\n",a,b);
 swap(a,b);
 printf("After\n");
 printf("a=%d\t b=%d\n",a,b);
 return 0;
}
void swap(int x,int y)
{
 int temp=0;
 temp=x;
 x=y;
 y=temp;
 
}

#include<stdio.h>
int main()
{
 int a,b,temp;
 int *p1=&a,*p2=&b;
 printf("Enter the value of a and b: \n");
 scanf("%d %d",p1,p2);
 temp=*p1;
 *p1=*p2;
 *p2 = temp;
 printf("After swapping : \na = %d\nb = %d\n",*p1,*p2);
 
}

#include <stdio.h> 
int main() 
{ 
 int n, i, sum = 0; 
 printf("Enter number of elements: "); 
 scanf("%d", &n); 
 int arr[n]; 
 int *p = arr; 
 printf("Enter %d numbers:\n", n); 
 for (i = 0; i < n; i++) 
 { 
 scanf("%d", p + i); 
 sum += *(p + i); 
 } 
 printf("Sum = %d\n", sum); 
 printf("Average = %.2f\n", sum / (float)n); 
 return 0; 
} 

#include <stdio.h> 
int string_length(char *p) 
{ 
 int len = 0; 
 while (*p != '\0') 
 { 
 len++; 
 p++; 
 } 
 return len; 
} 
int main() 
{ 
 char str[100];
 printf("Enter a string: "); 
 gets(str); 
 printf("Length of string = %d\n", string_length(str)); 
 return 0; 
} 

#include<stdio.h>
void main()
{
 char str[20]="Anu";
 int length = 0;
 length = strlen(str);
 printf("The length of a string is %d\n",length);
 
}

#include<stdio.h>
int main()
{
 char str[100] = "Ananya";
 int length = 0,;
 while(str[length]!='\0')
 {
  length++;
  
 }
 printf("Length is %d\n",length);
 return 0;
}

#include<stdio.h>
#include<string.h>
void main()
{
 char s[10]= "something";
 char c[10];
 strcpy(c,s);
 printf("The source line is %s\n Copied source is %s\n",s,c);
 
}

#include<stdio.h>
#include<string.h>
void main()
{
 char s[100],c[100];
 int i,n;
 printf("Enter a string : \n");
 scanf("%s",s);
 for (i=0;s[i]!='\0';i++)
 {
  c[i]=s[i];
 }
 c[i] = '\0';
 printf("The copied value is %s\n",c);
}

#include<stdio.h>
#include<string.h>
void main()
{
 char first[100] = "Ananya";
 char second[100] = "B M";
 char full_name[100];
 int i,k=0;
 for(i=0;first[i]!='\0';i++)
 {
  full_name[i]=first[i];
  k++;
 }
 for (i=0;second[i]!=0;i++)
 {
  full_name[k]=second[i];
  k++;
  
 }
 full_name[k] = '\0';
 printf("Full name = %s\n",full_name);
}
*/
#include<stdio.h>

enum day
{
 Mon,Tue,wed,Thus
};
int main()
{
 enum day d;
 d = Thus;
 printf("%d\n",d);
}