
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
        printf("%d  ",p->data);
        p=p->next;
    }
}
int add_ll(struct list* head1, struct list* head2){

   struct list* p= head1;
   struct list* q= head2;

   int sum=0;
   while(p!=NULL && q!=NULL){
        sum=(p->data)+(q->data);
        printf("%d  ",sum);
         p=p->next;
         q=q->next;
   }
   
}
 int main(){
     
    struct list* head1= (struct list*)malloc(sizeof(struct list));
    struct list* second1= (struct list*)malloc(sizeof(struct list));
    struct list* third1= (struct list*)malloc(sizeof(struct list));
    
    head1->data = 4 ;
    head1->next = second1;

    second1->data = 1;
    second1->next = third1;

    third1->data = 2;
    third1->next = NULL;
    
    
    struct list* head2= (struct list*)malloc(sizeof(struct list));
    struct list* second2= (struct list*)malloc(sizeof(struct list));
    struct list* third2= (struct list*)malloc(sizeof(struct list));
    
    head2->data = 1;
    head2->next = second2;

    second2->data = 3;
    second2->next = third2;

    third2->data = 6;
    third2->next = NULL;
    printf("linked list 1\n"); 
    print_linkedlist(head1);
    printf("\nlinked list 2\n");
    print_linkedlist(head2);
    printf("\n");
   add_ll(head1,head2);
   
   return 0;
 }
