//add the element of 2 linked list whicha re reversed then give the output in the form of reversed linked list

#include<stdio.h>
#include<stdlib.h>

 struct list{
     
     int data;
     struct list* next;
     
 };
 
 void print_linkedlist(struct list* head){
     
     struct list* p=head;
     while(p!=NULL){
         printf("%d\n",p->data);
         p=p->next;
     }
     
 }
 
 struct list *reverse_linkedlist(struct list* head){
    
    struct list* prev=NULL;
    struct list* next=NULL;
    struct list* current=head;
    
    while(current!=NULL){
        
       next=current->next;
       current->next=prev;
       prev=current;
       current=next;
    }
    head=prev;
    return head;
}

int store_ll1(struct node* head){
    
}


 int main(){
     
    struct list* head1= (struct list*)malloc(sizeof(struct list));
    struct list* second1= (struct list*)malloc(sizeof(struct list));
    struct list* third1= (struct list*)malloc(sizeof(struct list));
    
    head1->data = 7;
    head1->next = second1;

    second1->data = 11;
    second1->next = third1;

    third1->data = 23;
    third1->next = NULL;
    
    
    struct list* head2= (struct list*)malloc(sizeof(struct list));
    struct list* second2= (struct list*)malloc(sizeof(struct list));
    struct list* third2= (struct list*)malloc(sizeof(struct list));
    
    head2->data = 78;
    head2->next = second2;

    second2->data = 131;
    second2->next = third2;

    third2->data = 237;
    third2->next = NULL;
    printf("linked list 1\n"); 
    print_linkedlist(head1);
    printf("linked list 2\n");
    print_linkedlist(head2);
    
    head1=reverse_linkedlist(head1);
    head2=reverse_linkedlist(head2);
    
    printf("reversed linked list 1\n"); 
    print_linkedlist(head1);
    printf("reversed linked list 2\n");
    print_linkedlist(head2);
    
    store_ll1(head1);
    store_ll1(head2);
 }
