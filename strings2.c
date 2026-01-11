/string copyind - without function
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