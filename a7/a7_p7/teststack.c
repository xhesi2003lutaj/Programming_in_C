#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct stack strukti;
    strukti.count=0;
    char l;
    int n;
    while(1){
        scanf("%c",&l);
 
        switch(l){
 
            case's':
            scanf("%d",&n);
            printf("Pushing %d\n",n);
            push(&strukti,n);
            break;
 
            case'p':
            printf("Popping");
            pop(&strukti);
            printf("\n");
            break;
 
            case'e':
            printf("Emptying Stack " );
            empty(&strukti);
            break;
        
            case'q':
            printf("Quit\n");
            quit();
            break;
            
    }
    }
    return 0;
}