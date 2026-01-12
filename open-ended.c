#include<stdio.h>
#include<ctype.h>

int main()
{
    float quantity, price_per_unit, item_cost, discount_amount;
    float total_bill = 0.0;
    char add_another_item;

    do
    {
        printf("Enter quantity:\n");
        scanf("%f", &quantity);

        printf("Enter the price per unit:\n");
        scanf("%f", &price_per_unit);

        item_cost = quantity * price_per_unit;
        total_bill += item_cost;

        printf("Do you want to add another item? (y/n): ");
        while (getchar() != '\n');
        //scanf("%c",&add_another_item);
        scanf("%c", &add_another_item);

    } while (toupper(add_another_item) == 'Y');

    printf("\n___Billing Summary___\n");
    printf("Subtotal : %.2f Rs\n", total_bill);

    if (total_bill > 2000.0)
    {
        discount_amount = total_bill * 0.10;
        total_bill -= discount_amount;
        printf("Discount (10%%): %.2f Rs\n", discount_amount);
    }
    else
    {
        printf("No discount applied.\n");
    }

    printf("Total Bill : %.2f Rs\n", total_bill);

    return 0;
}

#include<stdio.h>
int main()
{
 int n,key;
 printf("Enter number of books: \n");
 scanf("%d",& n);
 int books[n];
 printf("Enter %d BookID s in ascending order: \n",n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",& books[i]);
 }
 printf("Enter the book ID to search : ");
 scanf("%d",&key);
 int low=0,high=n-1,found =0;
 while(low<=high)
 {
  int mid = (low+high)/2;
  if(books[mid]==key)
  {
   found = 1;
   break;
  }
  else if(books[mid]<key)
  {
   low=mid+1;
  }
  else
  {
   high= mid-1;
  }
 }
 if (found)
 {
  printf("Book with ID %d is available in the self\n",key);
 }
 else
 {
  printf("Book with ID %d is not available in the self\n",key);
 }
 return 0;
}

#include<stdio.h>
int main()
{
 int n;
 printf("Enter number of students : \n");
 scanf("%d",&n);
 int scores[n];
 printf("Enter scores of %d students:\n",n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&scores[i]);
 }
 for (int i=0;i<n;i++)
 {
  for(int j=0;j<n-i-1;j++)
  {
   if (scores[j]<scores[j+1])
   {
    int temp = scores[j];
    scores[j]=scores[j+1];
    scores[j+1]=temp;
   }
  }
 }
 printf("Scores in descending order:\n");
 for(int i=0;i<n;i++)
 {
 printf("%d ",scores[i]);
 }
 printf("\n");

 return 0;
}

#include <stdio.h>

int main()
{
    char firstName[50], lastName[50], fullName[100];
    int i = 0, j = 0, length = 0;

    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter last name: ");
    scanf("%s", lastName);


    while (firstName[i] != '\0')
    {
        fullName[j] = firstName[i];
        i++;
        j++;
    }


    fullName[j] = ' ';
    j++;


    i = 0;
    while (lastName[i] != '\0')
    {
        fullName[j] = lastName[i];
        i++;
        j++;
    }


    fullName[j] = '\0';


    while (fullName[length] != '\0')
    {
        length++;
    }

    printf("Full Name: %s\n", fullName);
    printf("Length of full name: %d\n", length);

    if (length > 20)
    {
        printf("Warning: Name exceeds screen limit\n");
    }

    return 0;
}

#include<stdio.h>
struct book
{
    char title[100];
    char author[100];
    int year;
};
int main()
{
    int i=0,n;
    struct book b[100];

    printf("Enter the number of Books : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnert Book (%d) Details:\n",i+1);
        printf("Enter Title\nAuthor\nDate of publication : ");
        scanf("%s %s %d",b[i].title,b[i].author,&b[i].year);

    }
    printf("\n---------Book Details -----------------\n");
    for(i=0;i<n;i++)
    {
        printf("Book Title : %s\nAuthor : %s\nYear of Publication :%d\n",b[i].title,b[i].author,b[i].year);
    }
}