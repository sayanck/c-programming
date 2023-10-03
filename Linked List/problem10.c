#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlist(struct Node *ptr, int sear)
{
    while (ptr != NULL)
    {
        if (ptr->data == sear)
        {
            printf("search found ::: %d\n", ptr->data);
            return;
        }
        ptr = ptr->next;
    }
    printf("seach not found");
}

void print_linkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    int search;

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for node structures
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 93;
    fourth->next = NULL;

    // printf("enter search element");
    // scanf("%d",&search);

    printf("linked list\n");

    print_linkedlist(head);

    printf("\n");
    printf("enter search element\n");
    scanf("%d", &search);

    linkedlist(head, search);

    return 0;
}