// DOUBLE LINKED LIST INSERTION 1ST NODE

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void linkedlist(struct node *head)
{

    while (head != NULL)
    {

        printf("%d \n", head->data);
        head = head->next;
    }
}

void linkedlist_rev(struct node *tail)
{

    while (tail != NULL)
    {

        printf("%d \n", tail->data);
        tail = tail->prev;
    }
}

struct node *insert_first_double_linkedlist(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->prev = head->prev;
    ptr->next = head;
    head->prev = ptr;

    return ptr;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *tail;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->prev = NULL;
    head->next = second;

    second->data = 89;
    second->prev = head;
    second->next = third;

    third->data = 74;
    third->prev = second;
    third->next = tail;

    tail->data = 12;
    tail->prev = third;
    tail->next = NULL;

    printf("Linked list \n");
    linkedlist(head);

    printf("reverse linked list\n");
    linkedlist_rev(tail);

    printf("\n\n");

    head = insert_first_double_linkedlist(head, 67);

    printf("Linked list after insertion \n");
    linkedlist(head);

    printf("reverse linked list after insertion\n");
    linkedlist_rev(tail);

    return 0;
}