/* CH-230-A
a7_p2.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    char data;
    struct node* next;
};
typedef struct node my_list;

//function to add at the bigging 
my_list* at_bign(my_list* head, char new_data){
    my_list* new_node=malloc(sizeof(my_list));
    if(!new_node){
        exit(1);
    }
//when the list is empty
    if(head==NULL){
        new_node->data=new_data;
        new_node->next=NULL;
        new_node->prev=NULL;
        head = new_node;
        return head;
    }
//when there is an element in the list make 
//the new element point to the first element
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = head;

    head->prev = new_node;
//make the newnode the head
    head=new_node;
    return head;
}

my_list* del_char(my_list* head,int position,char c){
    my_list* cursor=head;
    my_list* c1;
    my_list* c2;
    if(head==NULL){
        return NULL;
    }
    int ok = 0;
    while(cursor){
        c1=cursor->prev;
        c2=cursor->next;


        if(c1==NULL &&(cursor->data==c)){
            ok++;
            if (c2==NULL) {   //if the list is empty
                free(cursor);
                return NULL;
            }
            c2->prev=NULL;
            free(cursor);
            cursor=c2;
            head=c2;
            continue;
        }
//if we're at the end of the list
        if(c2==NULL && cursor->data==c){
            ok++;
    //remove the conenctions of the element 
            c1->next=NULL;
            free(cursor);//delete it
            break;
        }
        if(cursor->data==c){
            ok++;
    //reconecting the list
            c1->next=c2;
            c2->prev=c1;
            free(cursor);
            cursor=c2;
            continue;
        
        }
        if (cursor->data !=c) {
            cursor = cursor->next;
        }
    }
    //if char not found
    if (!ok) {
        printf("The element is not in the list!\n");
    }
    return head;
}
//free the list
void dispose(my_list *head){
        my_list* element;
        while(head !=NULL){
            element=head->next;
            free(head);
            head=element;
    }
}

void printList(my_list* head) {
    my_list* last;
    for(last=head; last; last = last->next){
    printf("%c ",last->data);
    }
    printf("\n");
}

//print in  reverse
void printback(my_list* head)
    {
    my_list* tail = head;
  if(head==NULL){
    return;
  }
    while(tail->next!=NULL){
        tail=tail->next;

 }
    while (tail!=head)
    {
        printf("%c ",tail->data);
        tail=tail->prev;
    }
    
      printf("%c ",tail->data);
        
   
    
    
    printf("\n");
}
//     while (tail!=NULL)
//     {
//         printf("%c ",tail->data);
//         tail=tail->prev;
//     }
    
//      //  printf("%c ",tail->data);
        
   
    
    
//     printf("\n");
// }
int main(){
  
    my_list* head=NULL;
    int n;
    char c;
//ask always for an input
while(1){
        scanf("%d",&n);
        getchar();

//calling the functions according to the input n
        switch(n){

            case 1:
                scanf("%c",&c);
                head = at_bign(head,c);
                break;

            case 2:
                scanf("%d",&n);
                scanf("%c",&c);
                head = del_char(head,n,c);
                break;


            case 3:
                printList(head);
                break;

            case 4:
                printback(head);
                break;

            case 5:
                dispose(head);
               exit(1);
                break;

            default:
                printf("Invalid");
                break;
        }
        }
            return 0;
        
}
