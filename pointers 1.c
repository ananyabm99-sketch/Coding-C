/*#include<stdio.h>
void main()
{
    int a= 10,b=20,c;
    int *p,*q;
    p=&a;
    q=&b;
    *p=300;
    c= *q;
    printf("a = %d\n",*p);
    printf("add of a = %d\n",&a);
    printf("add of pointer p = %d\n",&p);
    printf("a: %d\n",a);   //*******
    printf("c =%d\n",c);
}

#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Value of a = %d\n",a);
    printf("Address of a = %d\n",ptr);
    printf("ptr = %d\n",ptr);
    printf("Value stored at ptr = %d\n",*ptr);


}

#include<stdio.h>
void main()
{
    int a[3]={1,2,3};
    int *p;
    p=a;
    printf("value 1 = %d and Address 1 = %d\n",*p,p);
    p++;
    printf("Value 2 = %d and Address 2 = %d\n",*p,p);
    p++;
    printf("Value 3 = %d and Address 3 = %d\n",*p,p);
    p--;
    printf("Value 3 = %d and Address 3 = %d\n",*p,p);
}

#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a=10,b=20;
    printf("Before swapping :\n a= %d\n b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping :\n a= %d\n b=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Inner swapping : a= %d\n b=%d\n",*a,*b);
}


#include <stdio.h>

void swap(int , int );

int main() {
    int x = 10, y = 20;
    printf("Before swapping:\n x = %d\n y = %d\n", x, y);

    swap(x, y);

    printf("After swapping (in main):\n x = %d\n y = %d\n", x, y);
    return 0;
}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function:\n a = %d\n b = %d\n", a, b);
}

#include<stdio.h>
int main()
{
    int a[]={1,2,3,35};
    int *p;
    int i;
    p=a;
    for(i=0;i<4;i++)
    {
     printf("Value = %d\n",a[i]);
     printf("Address = %d\n",&a[i]);
     printf("%d\n------",*p);
     printf("Address of pointer = %d\n",&p[i]);

    }
    return 0;

}

//WAP to read n elements using pointers
#include<stdio.h>
int main()
{
    int n,i,sum;
    int *p;
    float avg;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    p = arr;
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + *(p+i);
    }
    printf("sum is %d\n",sum);
    avg = (float)sum/n;
    printf("Avg is %f\n",avg);

}


#include<stdio.h>
int main()
{
    int i,n,key=0,found = 0;
    printf("Enter the no of elements : \n");
    scanf("%d",&n);
    int arr[n];
    int *p;
    p=arr;
    printf("Enter each element of an array  :");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==*(p+i))
        {
            found =1;
            printf("Element found");
        }

    }
    if(found==0)
    {
        printf("Element not found");
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,n,large;
    int *p;
    printf("Enter no of elements in an array : \n");
    int arr[n];
    p=arr;
    scanf("%d",&n);
    printf("Enter each elements of an array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);

    }
    large =*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=large)
            large = *(p+i);
    }
    printf("Largest is %d\n",large);
    return 0;
}