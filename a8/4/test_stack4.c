/* CH-230-A
a8_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
 
#include <stdio.h>
#include <stdlib.h>
#include "stack4.h"
//calling all the functions
int main(){
    struct stack strukti;
    strukti.count=0;
    unsigned int l;
    scanf("%d",&l);
 
    dec_to_bin(&strukti,l);
    printf("The binary representation of %u is ",l);
    while(strukti.count!=0){
    empty(&strukti);
    }
    
    return 0;
} 
// 75 1001011