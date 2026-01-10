/*//WCP to string length - Function
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char name[10];
    printf("Enter a sentence : ");
    gets(name);
    i = strlen(name);
    printf("Length of a string : %d",i);
    return 0;

}

//WCP to string length - without function
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int i=0,count=0;
    printf("Enter your name : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
       count ++;
    }
    printf("Length of a string  = %d",count);
    return 0;

}

#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    int length=0;
    printf("Name: ");
    gets(str);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("Length : %d",length);
}

//string copying - build in function
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    printf("sentence : ");
    gets(s1);
    strcpy(s2,s1);
    printf("Source = %s\nDestination = %s",s1,s2);
}

//string copyind - without function
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i=0;
    printf("Sentence : ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i] = '\0';
    printf("copied string : %s",str2);
}

//string concatenation -strcat
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Sentence 1: ");
    gets(str1);
    printf("Sentence 2: ");
    gets(str2);
    strcat(str1,str2);
    printf("Concatenated string : %s",str1);
}