#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void push_elements(struct stack *ptr, int n)
{

    int array[10];

    printf("enter to push the elements\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        push(ptr, array[i]);
    }
}

void pop_elements(struct stack *s, int m)
{

    printf("poping out elements\n");
    
    for (int i = 0; i < m; i++)
    {
        pop(s);
    }
}

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

int peek(struct stack *s, int pos){
    
    int ele = (s->top)-pos +1;
    
    if(ele<0){
        return -1;
    }
    else{
    return s->arr[ele];
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    int n;
    int x;
    int m;
    int y;

    while (1)
    {
        printf("enter 1 to push and 2 to pop\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("enter no of elements to push\n");
            scanf("%d", &n);
            push_elements(s, n);
            break;

        case 2:
            printf("enter no of elements to pop\n");
            scanf("%d", &m);
            pop_elements(s, m);
            break;

        case 4:
            printf("you cant edit anymore");
            break;
        }

        if (x == 3)
        {
            break;
        }
    }
    
    printf("enter position you want to see the element");
    scanf("%d", &y);
    
    int k= peek(s,y);
    printf("%d is at the position %d",k,y);

    printf("'Final stack is:: \n'");

    for (int i = s->top; i >= 0; i--)
    {
        printf("\n--%d--\n", s->arr[i]);
    }

    return 0;
}
