// DOUBLE LINKED LIST DELETION LAST NODE

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

struct node *delete_end_double_linkedlist(struct node *head)
{

    //struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //ptr->data = data;

    struct node *p = head;
    struct node *q;
    
    while(p->next != NULL){
        p=p->next;
    }
    q=p->prev;
    q->next= NULL;
    free(p);

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

    head = delete_end_double_linkedlist(head);

    printf("Linked list after deletion \n");
    linkedlist(head);

    printf("reverse linked list after deletion\n");
    linkedlist_rev(head);

    return 0;
}