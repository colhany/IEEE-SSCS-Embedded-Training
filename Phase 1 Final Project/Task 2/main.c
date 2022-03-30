#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WELCOME_MESSAGE "\n### Library Management ###\n"
#define MENU "\n1. Add book information\n2. Display all books available\n3. Display highest priced book\n4. Display list of publishers\n5. Exit\n"

struct bookInfo
{
    char name[50];
    char publisher[50];
    int price;
    struct bookInfo * next;
};

typedef struct bookInfo book;

void addBook(book **);
void displayAll(book *);
void highestPrice(book *);
void displayPublishers(book *);

int main()
{
    book * head = NULL;
    int choice;

    while(1)
    {
        printf(WELCOME_MESSAGE);
        printf(MENU);
        printf("\nEnter one of the above: ");

        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                addBook(&head);
                continue;
            
            case 2:
                displayAll(head);
                continue;

            case 3:
                highestPrice(head);
                continue;

            case 4:
                displayPublishers(head);
                continue;

            case 5:
                exit(0);

            default:
                printf("Invalid input!");
        }
    }

    return 0;
}

void addBook(book ** head)
{
    book * new = (book *)malloc(sizeof(book));
    book * temp = *head;
    new->next = NULL;
    
    if(!new)
    {
        printf("\nMEMORY ERROR!\n");
        exit(1);    
    }

    if(!(*head))
        *head = new;
    else
        {
            while(temp->next)
                temp = temp->next;

            temp->next = new;
        }

    printf("\nEnter book name: ");
    fgets(new->name, sizeof(new->name), stdin);
    printf("Enter publisher name: ");
    fgets(new->publisher, sizeof(new->publisher), stdin);
    printf("Enter price: ");
    scanf("%d", &(new->price));
}

void displayAll(book * head)
{
    book * temp;
    temp = head;

    while(temp)
    {
        printf("\n\tBook name: %s\tPublisher name: %s\tPrice: %d\n", temp->name, temp->publisher, temp->price);
        temp = temp->next;
    }
}

void highestPrice(book * head)
{
    int max = 0;
    char name[50];
    book * temp = head;

    while(temp)
    {
        if(temp->price > max)
        {
            strcpy(name, temp->name);
            max = temp->price;
        }
        
        temp = temp->next;
    }

    printf("\n%s", name);
}

void displayPublishers(book * head)
{
    book * temp = head;

    while(temp)
    {
        printf("\n%s", temp->publisher);
        temp = temp->next;
    }
}