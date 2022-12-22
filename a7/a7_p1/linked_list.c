 
#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"
//add at the beggining
 struct list *push_front(struct list* my_list ,int value ) {
        struct list *newel ;
        newel=(struct list*)malloc(sizeof(struct list));
 
        if(newel == NULL){
        printf (" Error allocating memory \n");
        return my_list;
        }
        newel->info =value;
        newel->next =&my_list[0];//same as my_list
        return newel;
        }
 
//add at the end
 struct list* push_back(struct list* my_list ,int value) {
     struct list* cursor, *newel;
      cursor = my_list;
      newel =(struct list*)malloc(sizeof(struct list));
 
      if( newel == NULL){
      printf (" Error allocating memory \n");
      return my_list ;
      }
      newel->info=value;
//theres not gonna be a next elemnt as we're adding the last      
      newel->next=NULL;
  
  //if theres no el in the list just return the added 
       if (my_list==NULL){
       return newel;
        }
 
       while(cursor->next!=NULL){
//point to the next
       cursor =cursor->next;
       }
       cursor->next=newel;
       return my_list;
       }
 
 
        //remove first
struct list* remove_first(struct list *my_list){
    if (my_list==NULL){
          return my_list;
       }
       struct list* new_list=my_list;
       my_list=(my_list->next);
       free(new_list);
       return my_list;
       }
        
 void dispose_list(struct list* my_list) {
        struct list * nextelem;
        while (my_list!=NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
        }
        }
 
 void print_list(struct list* my_list ) {
     struct list* p;
      for(p =my_list; p!=NULL; p=p->next) {
       printf ("%d ", p->info);
        }
       printf("\n");
        }