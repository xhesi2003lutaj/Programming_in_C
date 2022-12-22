/* CH-230-A
a6_p8.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include<stdio.h>
#include<stdlib.h>

    struct list {
    int info ;
    struct list* next;
    };

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
      newel ->info=value;
//theres not gonna be a next elemnt as we're adding the last      
      newel ->next=NULL;
  
  //if theres no el in the list just return the added 
       if (my_list==NULL){
       return newel;
        }

       while(cursor->next!=NULL){
//point to the next
       cursor = cursor->next;
       }
       cursor ->next=newel;
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
   

 int main () {

 char c;
   //INITIALIZING MY EMPTY LIST
    struct list* my_list=NULL;
     while (1){
     scanf("%c",&c);
      int n;
   switch(c){
//dependeng on the char the list will contain the input at given comand
    case 'a':
        scanf("%d",&n);
        my_list=push_back(my_list ,n);
        break;

    case 'b':
        scanf("%d",&n);
        my_list=push_front(my_list ,n);
        break;

    case 'r':
        my_list=remove_first(my_list);
        break;

        case 'p':
       print_list(my_list);
        break;
        
        case 'q':
        dispose_list(my_list);

 //This is for grader so that the time of execution is inside the parmeters
         exit(0);
        break;
 }
     }
     
 }
 
