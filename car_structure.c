#include <stdio.h>
#include <string.h>

struct car
{
    int id;
    char model[50];
    float mileage;
};

void readCars(struct car c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of car %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &c[i].id);
        printf("Model: ");
        scanf("%s", c[i].model);
        printf("Mileage: ");
        scanf("%f", &c[i].mileage);
    }
}

void displayCars(struct car c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nCar %d Details\n", i + 1);
        printf("ID      : %d\n", c[i].id);
        printf("Model   : %s\n", c[i].model);
        printf("Mileage : %.2f\n", c[i].mileage);
    }
}

void searchById(struct car c[], int n)
{
    int id, i, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (c[i].id == id)
        {
            printf("\nCar Found!\n");
            printf("Model: %s\nMileage: %.2f\n", c[i].model, c[i].mileage);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Car not found!\n");
}

void averageMileage(struct car c[], int n)
{
    float sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum += c[i].mileage;

    printf("Average Mileage = %.2f\n", sum / n);
}

void highestMileage(struct car c[], int n)
{
    int i, max = 0;
    for (i = 1; i < n; i++)
    {
        if (c[i].mileage > c[max].mileage)
            max = i;
    }

    printf("\nCar with Highest Mileage\n");
    printf("ID: %d\nModel: %s\nMileage: %.2f\n",
           c[max].id, c[max].model, c[max].mileage);
}

void searchByModel(struct car c[], int n)
{
    char model[50];
    int i, found = 0;

    printf("Enter model to search: ");
    scanf("%s", model);

    for (i = 0; i < n; i++)
    {
        if (strcmp(c[i].model, model) == 0)
        {
            printf("\nCar Found!\n");
            printf("ID: %d\nMileage: %.2f\n", c[i].id, c[i].mileage);
            found = 1;
        }
    }

    if (!found)
        printf("Model not found!\n");
}

int main()
{
    struct car c[100];
    int n, choice;

    printf("Enter number of cars: ");
    scanf("%d", &n);

    do
    {
        printf("\n--- Car Dealership Menu ---\n");
        printf("1. Read cars\n");
        printf("2. Display cars\n");
        printf("3. Search by ID\n");
        printf("4. Find average mileage\n");
        printf("5. Display car with highest mileage\n");
        printf("6. Search by model\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: readCars(c, n); break;
        case 2: displayCars(c, n); break;
        case 3: searchById(c, n); break;
        case 4: averageMileage(c, n); break;
        case 5: highestMileage(c, n); break;
        case 6: searchByModel(c, n); break;
        case 7: printf("Exiting...\n"); break;
        default: printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}