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

struct Node *deletion_between_linkedlist(struct Node *head, int index)
{
    // struct Node *new_ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    struct Node *q = head;

    int i = 1;
    while (i != (index-1))
    {
        p = p->next;
        i++;
    }
    int j = 1;

    while (j != index)
    {
        q = q->next;
        j++;
    }

    // new_ptr->data = data;
    p->next = q->next;
    free(q);
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
    printf("After deletion\n");
    head = deletion_between_linkedlist(head, 2);
    linkedlist(head);

    return 0;
}