#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int no)
{

    if (isfull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = no;

        printf("%d is pushed in the stack\n", no);
    }
}

int pop(struct stack *ptr)
{

    if (isempty(ptr))
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        int no = ptr->arr[ptr->top];
        ptr->top--;
        return no;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 56);
    push(s, 89);
    push(s, 23);
    push(s, 78);
    push(s, 56);
    printf("%d poped from stack", pop(s));

    for(int i=0; i<s->size; i++){
        printf("%d--\n", s->arr[i]);
    }
}
