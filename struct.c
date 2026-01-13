#include<stdio.h>
struct student
{
    char name[100];
    int age;
    int grade;
};

int main()
{
    struct student s[100];
    int n,i=0;
    struct student *p;
    p=s;
    printf("Enter total students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Details of student%d\n",i+1);
        printf("Enter student (name,age,grade): ");
        scanf("%s %d %d",(*(p+i)).name,&(*(p+i)).age,&(*(p+i)).grade);
    }
    for(i=0;i<n;i++)
    {
        printf("---Sudent%d Details---",i+1);
        printf("Name:%s\n",(*(p+i)).name);
        printf("Name:%d\n",(*(p+i)).age);
        printf("Name:%d\n",(*(p+i)).grade);

    }
}


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

//without function
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100],str3[100];
    int i,k=0;
    printf("str1 : \n");
    gets(str1);
    printf("str2 : \n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i] = str1[i];
        k++;

    }
    for(i=0;str2[i]!='\0';i++)
    {
        str3[k ] = str2[i];
        k++;
    }
    str3[k]='\0';
    printf("concatenated string : %s ",str3);
}

//comparing string using strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="Sanatana";
    char str2[100]="Sanatan";
    if(strcmp(str1,str2)==0)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }

}
*/
//without function
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100]="Ananya";
    char str2[100]="B M";
    int i=0,identical =1;
    if(strlen(str1)!= strlen(str2))
    {
        printf("Not identical");
    }
    else
    {
        for(i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            identical = 0;
            break;
        }
    }
    if(identical)
        printf("Identical");
    else
       printf("not Identical");

    }


}