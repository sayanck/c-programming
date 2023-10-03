
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is :: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *delete_node(struct node *head, struct node *q)
{
    struct node *p = head;

    while (p->next != q)
    {
        p = p->next;
        // i++;
    }
    p->next = q->next;
    free(q);

    return head;
    
    
}

void linked_list_algo(struct node *head)
{
    struct node *p = head;
    struct node *a;

    while (p != NULL)
    {
        //struct node *prev = NULL;
        struct node *q = p->next;

        while (q != NULL)
        {
            if (p->data == q->data)
            {
                a=q;
                head = delete_node(head,q);
                //q = prev != NULL ? prev->next : head;
            }
            else
            {
               
                //prev = q;
                q=a;
                q = q->next;
            }
        }

        p = p->next;
    }
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

    head->data = 20;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 70;
    fourth->next = NULL;

    printf("Original linked list:\n");
    linkedlist(head);

    linked_list_algo(head);

    printf("Linked list after removing duplicates:\n");
    linkedlist(head);

    return 0;
}
