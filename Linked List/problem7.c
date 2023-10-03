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

struct Node *deletion_start_linkedlist(struct Node *head)
{
    struct Node *p = head;

    head = head->next;
    //head=p;
    free(p);

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

    head->data = 45;
    head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 78;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;

    printf("linked list \n");
   // linkedlist(head);
   linkedlist(head);

    head=deletion_start_linkedlist(head);

    printf("\nlinked after deletion\n");
    linkedlist(head);
}