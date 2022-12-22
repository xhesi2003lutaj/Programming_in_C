#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"
 
int main(){
//struct list* my_list=NULL;
    char c;
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
     
    return 0;
}