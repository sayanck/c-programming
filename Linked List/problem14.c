#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void circular_linkedlist(struct node *head)
{

    struct node *p = head;
    do
    {
        printf("element -- %d\n", p->data);
        p = p->next;
    } while (p != head);
}

struct node *delete_last_circular_linkedlist(struct node *head)
{

    // struct node* ptr= (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = head;

    while (p->next != head)
    {
        p = p->next;
    }
    while (q->next != p)
    {
        q = q->next;
    }
    // ptr->data=data;
    q->next = head;
    free(p);

    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 23;
    third->next = fourth;

    fourth->data = 93;
    fourth->next = head;

    printf("circular linked list\n");

    circular_linkedlist(head);

    head = delete_last_circular_linkedlist(head);
    printf("circular linked list deletion\n");

    circular_linkedlist(head);

    return 0;
}
