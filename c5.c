#include <stdio.h>
#include <math.h>
int main()
{
 float x1,y1,x2,y2,distance;
  printf("Enter the x coordinate of the first point x1: ");
  scanf("%f",& x1);
  printf("Enter the y coordinate of the first point y1: ");
  scanf("%f",& y1);
  printf("Enter the x coordinate of second point x2: ");
  scanf("%f",& x2);
  printf("Enter the y coordinate of second point y2: ");
  scanf("%f",& y2);
  distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  printf("The distance between two points is: %.2f \n",distance);
  return 0;
}
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the student's marks : ");
    scanf("%d", &marks);

    // Valid input to be within a reasonable range (0-100)
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks entered. Please enter the value between 0 and 100.\n");
    }
    else
    {
        // determine & display the grade using an if-else if ladder
        if (marks >= 90)
        {
            printf("Grade : A\n");
        }
        else if (marks >= 75)
        {
            printf("Grade : B\n");
        }
        else if (marks >= 60)
        {
            printf("Grade : C\n");
        }
        else if (marks >= 50)
        {
            printf("Grade : D\n");
        }
        else
        {
            printf("Grade : F\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int panNumbers[] = {10101, 10102, 10103};
    int aadharNumbers[] = {20201, 20202, 20203};
    int apaarIds[] = {30301, 30302, 30303};
    int drivingLicenses[] = {40401, 40402, 40403};
    int passports[] = {50501, 50502, 50503};
    int inputID, choice;
    int size = 3;

    printf("Select ID type to verify:\n");
    printf("1. PAN Number\n");
    printf("2. AADHAAR Number\n");
    printf("3. APAAR ID\n");
    printf("4. Driving License\n");
    printf("5. Passport\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the unique ID number: ");
    scanf("%d", &inputID);

    int verified = 0;

    switch(choice)
    {
        case 1:
            for(int i = 0; i < size; i++)
            {
                if(inputID == panNumbers[i])
                {
                    verified = 1;
                    break;
                }
            }
            break;

        case 2:
            for(int i = 0; i < size; i++)
            {
                if(inputID == aadharNumbers[i])
                {
                    verified = 1;
                    break;
                }
            }
            break;

        case 3:
            for(int i = 0; i < size; i++)
            {
                if(inputID == apaarIds[i])
                {
                    verified = 1;
                    break;
                }
            }
            break;

        case 4:
            for(int i = 0; i < size; i++)
            {
                if(inputID == drivingLicenses[i])
                {
                    verified = 1;
                    break;
                }
            }
            break;

        case 5:
            for(int i = 0; i < size; i++)
            {
                if(inputID == passports[i])
                {
                    verified = 1;
                    break;
                }
            }
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    if(verified)
        printf("Individual is verified.\n");
    else
        printf("Individual is not verified.\n");

    return 0;
}