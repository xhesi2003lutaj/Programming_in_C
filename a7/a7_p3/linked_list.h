#include<stdio.h>
#include<stdlib.h>
/* CH-230-A
a7_p1.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
 
 
struct list {
    int info ;
    struct list* next;
};
   //INITIALIZING MY EMPTY LIST
    
//add at the beggining
struct list *push_front(struct list* my_list ,int value );
 
//add at the end
struct list* push_back(struct list* my_list ,int value);
 
 
struct list* remove_first(struct list *my_list);
 
void dispose_list(struct list* my_list);
 
void print_list(struct list* my_list);
 
#endif