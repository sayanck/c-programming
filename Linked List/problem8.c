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
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deletion_end_linkedlist(struct Node *head, int index)
{
    // struct Node *new_ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    struct Node *q = head;

    // int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
        // i++;
    }
    // int j = 0;

    while (q->next != p)
    {
        q = q->next;
        // j++;
    }

    // new_ptr->data = data;
    q->next = p->next;
    // or:: q->next = NULL;
    free(p);
    //  p->next = new_ptr;

    return head;
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
    head = deletion_end_linkedlist(head, 3);
    linkedlist(head);

    return 0;
}