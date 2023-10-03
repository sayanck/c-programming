#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertion_first_linkedlist(struct Node *head, int data)
{

    struct Node *pointer = (struct Node *)malloc(sizeof(struct Node));
    pointer->data = data;
    pointer->next = head;

    return pointer;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

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

    linkedlist(head);
    printf("After insertion\n");
    head = insertion_first_linkedlist(head, 101);
    linkedlist(head);

    return 0;
}