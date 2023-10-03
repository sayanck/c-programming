#include<stdio.h>
#include<stdlib.h>

struct node{
    
    int data;
    struct node *next;
};

void linkedlist(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertion_given_linkedlist(struct node *head,struct node *q, int data){
   struct node *new_ptr= (struct node *)malloc(sizeof(struct node));
   struct node *p=head;

   while(p->next!=q){
    p=p->next;
    //i++;
   }
   new_ptr->data=data;
   new_ptr->next=p->next;
   p->next=new_ptr;

   return head;

}

int main(){

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head= (struct node *)malloc(sizeof(struct node));
    second= (struct node *)malloc(sizeof(struct node));
    third= (struct node *)malloc(sizeof(struct node));
    fourth= (struct node *)malloc(sizeof(struct node));

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
    head = insertion_given_linkedlist(head,second,101);
    linkedlist(head);

    return 0;
}