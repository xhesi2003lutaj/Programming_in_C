/* CH-230-A
a6_p9.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include<stdio.h>
#include<stdlib.h>

    struct list {
    int info ;
    struct list* next;
    };
   //INITIALIZING MY EMPTY LIST
    struct list* my_list=NULL;
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
        my_list=newel;
        return my_list;
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
   
struct list* add_atposition(struct list* my_list ,int position,int value){
// empty list case
	if(my_list==NULL && position!=0){
		printf("Invalid position!\n");
	 return my_list;
}
	// count nr of elements
	struct list *cursor =my_list;
	int count = 0;
	while(cursor!=NULL){
		cursor = cursor->next;
		count++;
	}
	
	// invalid cases
	if(position<0 || position>count){
		printf("Invalid position!\n");
    }
	else if (position==0){//!!!it is not adding at position 0
		push_front(my_list,value);
        }
    //add at the end if position=length of list
	else if (position==count){
		push_back(my_list,value);
        }
	else{
		struct list *newel = (struct list*)malloc(sizeof(struct list));
		if(newel==NULL){
			printf("Cannot allocate memory for node");
            return my_list;
            }
		newel->info= value;
		cursor = my_list;
		int i;
		for(i=0; i<position-1; i++){
			cursor = cursor->next;
		}
		newel->next = cursor->next;
		cursor->next = newel;
	}
    return my_list;
}
int getmiddle(struct list* my_list){
    struct list *fast=my_list;
    struct list *slow=my_list;
    while (fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
         
    }
    return slow->info;
  
}
int countOfNodes(struct list *head)
{
   int count = 0;
   while (head != NULL) {
    head = head->next;
     count++;
 }
   return count;
}
struct list *removemiddle(struct list *my_list){
    struct list *current;
    struct list *head=my_list;
    struct list *fast=my_list;
    struct list *slow=my_list;
    int count=0;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        count++;
    }
    while (count-1)
       head=head->next;
    

    head->next=head->next->next;
    return my_list;
    
}
//code to reverse the elements
struct list* reverse(struct list* my_list){

    struct list *current,*previous,*nextt;
    current=my_list;
    previous=NULL;

    while(current!=NULL){

        nextt=current-> next;
        current->next=previous;
        previous=current;
        current=nextt;
    }
    my_list=previous;
    return my_list;
}
 int main () {

 char c;
 
     while (1){
     scanf("%c",&c);
      int n;
      int position;
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

        case 'm':
       printf("%d",getmiddle(my_list));
        break;

        case 'x':
       my_list=removemiddle(my_list);
        break;
        
        case'i':
        
        scanf("%d",&position);
        scanf("%d",&n);
        add_atposition( my_list , position,n);
        break;

       case 'R':
			my_list = reverse(my_list);
			break;

        case 'q':
        dispose_list(my_list);

 //This is for grader so that the time of execution is inside the parmeters
         exit(0);
        break;
 }
     }
     
 }