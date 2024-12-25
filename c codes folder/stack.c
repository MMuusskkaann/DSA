#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *array;
};

int isempty(struct stack *ptr ){
    if(ptr->top == -1){
        return 1;
    }

    else
    return 0;
}

int isfull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }

    else 
    return 0;
}

void push(struct stack *ptr,int value){
    if(isfull(ptr)){
        printf("stack overflow, cannot push value in the stack\n");
    }

    else{
        ptr->top++;
        ptr->array[ptr->top]=value;
    }
}

int pop(struct stack* ptr){
    if(isempty(ptr)){
        printf("stack underflow,cannot pop elements from the stack");
    }

    else{
        int value=ptr->array[ptr->top];
        ptr->top--;
    }
}


int main(){

    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    int n;
    printf("enter the size of the stack\n");
    scanf("%d",&n);
    s->size=n;
    s->top=-1;
    s->array=(int*)malloc(s->size*sizeof(int));

    printf("stack implemented successfully\n");

    printf("----------*****----------\n");

    printf("before pushing,full-%d\n",isfull(s));

    printf("----------*****----------\n");

    printf("before pushing,empty=%d\n",isempty(s));

    printf("----------*****----------\n");

    push(s,78);
    push(s,56);
    push(s,8);
    push(s,1);
    push(s,8);
    push(s,6);
    push(s,89);
    push(s,11);

    printf("----------*****----------\n");

    printf("after pushing,full=%d\n",isfull(s));
    printf("after pushing,empty=%d\n",isempty(s));

    printf("----------*****----------\n");

    printf("Popped %d from the stack \n",pop(s));




}