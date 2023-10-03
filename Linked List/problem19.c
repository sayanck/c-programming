// DOUBLE LINKED LIST INSERTION BETWEEN NODE

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

void linkedlist_rev(struct node *head)
{

    struct node *p = head->next;
    while (p->next != NULL)
    {

        p = p->next;
    }
    while (p != NULL)
    {

        printf("%d \n", p->data);
        p = p->prev;
    }
}

struct node *insert_between_double_linkedlist(struct node *head, int data, int index)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    struct node *q;
    int i=1;

    while(i!=(index-1)){

        p=p->next;
    }

    q=p->next;
    ptr->next=q;
    p->next=ptr;
    q->prev=ptr;
    ptr->prev=p;

    return head;
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
    linkedlist_rev(head);

    printf("\n\n");

    head = insert_between_double_linkedlist(head, 67, 2);

    printf("Linked list after insertion \n");
    linkedlist(head);

    printf("reverse linked list after insertion\n");
    linkedlist_rev(head);

    return 0;
}