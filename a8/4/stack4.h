/* CH-230-A
a8_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
#include<stdio.h>
#include<stdlib.h>
 
#ifndef _STACK_H
#define _STACK_H
 
struct stack {
 int count;
int array[12]; // Container
};
//function prototypes
void push(struct stack *f,int x);
void pop(struct stack *f);
int is_Empty(struct stack*f);
void empty(struct stack *f);
void dec_to_bin(struct stack *f, unsigned int x);
void quit();
#endif