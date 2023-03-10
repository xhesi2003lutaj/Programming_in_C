/* CH-230-A
a8_p3.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
 
/**
 * @file testqueue.c
 */
 
#include <stdio.h>
#include<stdlib.h>
#include "queue.h"
 
int main() 
{
    Queue line;
    Item temp;
    char ch;
    
    initialize_queue(&line);
    
    while (((ch = getchar()) != EOF) && (ch != 'q'))
    {
        switch (ch)    {
            case 'a':
                printf("add int: ");
                scanf("%d", &temp);
                if (!queue_is_full(&line))
                {
                    printf("Putting %d into queue", temp);
                    enqueue(temp, &line);
                }
                else
                    puts("Queue is full");
                break;
 
            case 'd':
                if (queue_is_empty(&line))
                    puts("Nothing to delete!");
                else
                {
                    dequeue(&temp, &line);
                    printf("Removing %d from queue", temp);
                }
                break;
                
                case 'p':
                if (queue_is_empty(&line)){
                    //puts("Nothing to print!");
                    printf("content of the queue: ");
                    print_queue(&line);
                }
                else
                {
                    printf("content of the queue: ");
                    print_queue(&line);
                }
                break;
 
            default:
                printf("\n%d items in queue\n", queue_item_count(&line));
                puts("Type a to add, d to delete, p to print, q to quit:");
        }
    }    
 
    empty_queue(&line);
    puts("Bye.");
    exit(1);
    
    return 0;
}