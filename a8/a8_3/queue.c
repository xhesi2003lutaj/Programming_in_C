/* CH-230-A
a8_p3.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
 
/**
 * @file queue.c
 */
 
#include <stdio.h>
#include <stdlib.h>
 
#include "queue.h"
 
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}
 
int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}
 
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}
 
int queue_item_count(const Queue *pq)
{
    return pq->items;
}
 
int enqueue(Item item, Queue *pq)
{
    //if queue is full do not do anything
    if(pq->items!=MAXQUEUE){
        //. Create a new node
        Node *new_node=malloc(sizeof(Node));
        if(new_node==NULL){
            exit(1);
        }
        // Copy item to the node
        //Set next pointer to NULL
        new_node->item=item;
        new_node->next=NULL;
    if(pq->items==0){//Set front node if queue was empty
        pq->front=new_node;
        pq->rear=new_node;
        
    }else{
        //Set current rear node’s next pointer to new node if queue
        //already exists
       //Set rear pointer to new node
       //old rear's next node is newnode
        pq->rear->next=new_node;
        pq->rear=new_node;
    }
      //Add 1 to item count
       pq->items++;
} return 0;
}
 
int dequeue(Item *pitem, Queue *pq)
{
    //*pitem=pq->front->item;
    if(queue_is_empty(pq)){
    return -1;
    }
    *pitem=pq->front->item;
    Node *temp;
    temp=pq->front;
    pq->front=pq->front->next;
    free(temp);
    pq->items--;
    if(pq->items==0){
        pq->front=pq->rear=NULL;
    }
    /*//alternative(simpler)
        Node *temp;
        temp=pq->front;
        pq->front = pq->front->next;
        free(temp);
        pq->items--;
 
        if(pq->items==0){
            pq->front=NULL;
            pq->rear=NULL;
            pq->items--;
        }
        */
        return 0;
}
 
void empty_queue(Queue *pq)
{
    if(queue_is_empty(pq)){
        return ;
    }
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
//printing the queue
void print_queue(Queue *pq){
    Node *temp;
    temp=pq->front;
    while(temp!=NULL){
        printf("%d ",temp->item);
        temp=temp->next;
        
    }
    return;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
/*
void print(Queue *pq){
    Node *temp;
    temp=pq->front;
    while(temp!=NULL){
        printf("%d ",temp->item);
        temp=temp->next;
        
    }
    return;
}
*/