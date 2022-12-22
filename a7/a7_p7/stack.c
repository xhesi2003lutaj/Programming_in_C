#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
///////////
 

void push(struct stack *f,int x){
 
    if(f->count==12){
     
    printf("%s","Pushing Stack Overflow\n");
    }  
    
    
    f->array[f->count++]=x;
 
 
}

void pop(struct stack *f){
    if(f->count==0){
    printf(" %s","Stack Underflow");
    return ;
    }
    int res;
    res=f->array[f->count-1];
    f->array[f->count-1]=0;
    f->count --;
    printf(" %d", res);
}

int is_Empty(struct stack*f){
   
    return(f->count==0);
       
    }
 
void empty(struct stack *f){
    if(f-> count==0)
    printf("Stack Underflow\n");
 

    while(f->count!=0){
    int res;
    res=f->array[f->count-1];
    f->array[f->count-1]=0;
    f->count --;
    printf("%d ",res);
    }
    printf("\n");
}
 
void quit(){
   exit(1);
 
}