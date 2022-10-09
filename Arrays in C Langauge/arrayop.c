#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a[100], n, i, value, position;

void create();
void display();
void insert();
void del();
void search();

void main()
{
    int choice = 1;
    clrscr();
    create();
    do
    {
        printf("\n\n*-------MENU-------*\n");
        printf("1.DISPLAY\n");
        printf("2.INSERT\n");
        printf("3.DELETE\n");
        printf("4.SEARCH\n");
        printf("5.EXIT\n");
        printf("*------------------*");
        printf("\nEnter Your Choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (n == 0)
            {
                printf("No elements to display");
            }
            else
            {
                display();
            }
            break;
        case 2:
            insert();
            display();
            break;
        case 3:
            if (n == 0)
            {
                printf("No elements to delete");
            }
            else
            {
                del();
                display();
            }
            break;
        case 4:
            if (n == 0)
            {
                printf("Array is empty.");
            }
            else
            {
                search();
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
        }
    } while (choice <= 5);
    getch();
}

// Creating array elements
void create()
{
    printf("\nEnter the size of array:\t");
    scanf("%d", &n);
    printf("\nEnter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

// displaying array elements
void display()
{
    int i;
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

// Inserting element into an array
void insert()
{
    printf("\nEnter the position for the new element:\t\n");
    scanf("%d", &position);
    if (position <= n)
    {
        printf("\nEnter the element to be inserted :\t");
        scanf("%d", &value);
        for (i = n - 1; i >= position - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[position - 1] = value;
        n = n + 1;
    }
    else
    {
        printf("Enter the correct position between 1 to %d\n", n);
    }
}

// Deleting an array element
void del()
{
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d", &position);
    value = a[position - 1];
    for (i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nThe deleted element is = %d", value);
}

// Searching element in an array
void search()
{
    int ele, count = 0;
    printf("\nEnter the element to search : \t\n");
    scanf("%d", &ele);
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == ele)
        {
            printf("%d", i + 1);
            count++;
        }
    }
    if (count != 1)
    {
        printf("\nElement not found in the Array.");
    }
}