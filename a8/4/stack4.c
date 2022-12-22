/* CH-230-A
a8_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
#include <stdio.h>
#include <stdlib.h>
#include "stack4.h"
 
//function definitions
void push(struct stack *f,int x){
 
    if(f->count==12){
     
    printf(" %s","Stack Overflow\n");
    return;
    }  
     // moved this message from the main here 
    // such that Pushing value will be printed only 
    // if the stack is not full
    
   // printf(" %d\n",x);
    f->array[f->count++]=x;
 
 
}
void dec_to_bin(struct stack *f, unsigned int x){
    
    unsigned int rem;
    while(x==0){
      push(f,x); 
      return;
  }
    {
    //converting a decimal to binary and pushing the bits to the stack
    for(;x>0;){
      rem=x%2;
      push(f,rem);
      x/=2;
    }  
    
}
}
//poping an int in the stack 
/*
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
*/
//checking if its empty
int is_Empty(struct stack*f){
   
    return(f->count==0);
       
    }
 
void empty(struct stack *f){
    if(f-> count==0){
    printf(" Stack Underflow");
    return;
    }
//emptyng the stack
    while(f->count!=0){
     
    int res;
    res=f->array[f->count-1];
    f->array[f->count-1]=0;
    f->count --;
      printf("%d",res);
 
    }
printf(".\n");
  
  
}
 
void quit(){
   exit(1);
 
}