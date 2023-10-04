//revrse a linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node* next;
};

void print_linkedlist(struct node* head){
    
    struct node* p= head;
    
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}

struct node *reverse_linkedlist(struct node* head){
    
    struct node* prev=NULL;
    struct node* next=NULL;
    struct node* current=head;
    
    while(current!=NULL){
        
       next=current->next;
       current->next=prev;
       prev=current;
       current=next;
    }
    head=prev;
    return head;
}

int main(){
  struct node* head;
  struct node* second;
  struct node* third;
  struct node* fourth;
  
  head= (struct node*)malloc(sizeof(struct node));
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
    fourth->next = NULL;
    
    printf("linkde list is:\n");
    print_linkedlist(head);
    
    printf("reverse linkde lsit:\n");
    head=reverse_linkedlist(head);
    print_linkedlist(head);
    
    return 0;
}
