//write a program to read and print n numbers
/*#include <stdio.h>
int main()
{
    int num[100],n,i;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",& num[i]);
    printf("Entered elements are : \n");
    for (i=0;i<n;i++)
        printf("num[%d] = %d\n",i,num[i]);
}

//write a program to sum and average of Array
#include <stdio.h>
int main()
{
    int num[100],n,i,sum=0;
    float average;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter the each element of the number.\n");
    for(i=0;i<n;i++)
        scanf("%d",& num[i]);
    printf("Entered elements are : \n");
    for(i=0;i<n;i++)
    {
    //    printf("num[%d] = %d\n",i,num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
        average = sum/n;
    }
    printf("The sum of elements : %d\n",sum);
    printf("average is:  %f:",average);

    return 0;

}

//Array ,find sum of odd and even numbers
#include <stdio.h>
int main()
{
    int num[100],n,i,oddsum=0,evensum=0;
    printf("Enter the size of an Array: \n");
    scanf("%d",&n);
    printf("Enter the number of an Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    //printf("The entered elements are : \n");
    for(i=0;i<n;i++)
    {
     //   printf("num[%d] = %d\n",i,num[i]);
    }
    for(i=0;i<n;i++)
    {
    if(num[i]%2==0)
    {
        evensum= evensum+num[i];
    }
    else
    {
        oddsum=oddsum+num[i];
    }
    }
    printf("The sum of Even numbers is %d\n",evensum);
    printf("The sum of odd numbers is %d\n",oddsum);
    return 0;
}


//Find the sum and average of n even numbers<<Array>>
#include <stdio.h>
int main()
{
    int num[100],n,i;
    float sum=0,average=0;
    printf("Enter the size of an Array: \n");
    scanf("%d",&n);
    printf("Enter the elements of an Array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The entered elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("num[%d]=%d\n",i,num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            sum = sum+num[i];
            average = sum/n;
        }
    }

    printf("The sum of even numbers is %f and its average is %f\n",sum,average);
    return 0;
}

//Array__odd and even segregation and which is the largest among odd and even
#include <stdio.h>
int main()
{
    int num[100],n,i,counteven,countodd;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter each elements of an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The Entered numbers are : \n");
    for(i=0;i<n;i++)
    {
        printf("num[%d]=%d\n",i,num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            counteven+=1;
        }
        else
        {
            countodd+=1;
        }
    }
    if (counteven>countodd)
    {
        printf("Even no's are more\n");
    }

    else if(counteven==countodd)
    {
        printf("Both are Equal\n");
    }

    else
    {
        printf("Odd no's are more\n");
    }

    return 0;

}

//Prime or not in an Array:
#include<stdio.h>
int main()
{
  int num[100],n,i,j;
  printf("enter a number of elements(1-100):\n");
  scanf("%d",&n);
  printf("enter each element of number:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",& num[i]);
  //printf("The entered elements are:\n");
  }
  for(i=0;i<n;i++)
  {
    printf("num[%d]=%d\n",i,num[i]);
    for (j=2;j<=num[i]/2;j++)
    {
      if(num[i]%j==0)
        {
        printf("%d is not a prime\n",num[i]);
        break;
        }
    }
    if(j>num[i]/2)
     printf("%d is prime\n",num[i]);
  }
  return 0;
}