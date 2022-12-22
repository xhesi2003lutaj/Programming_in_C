/* CH-230-A
a6_p5.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
void show_bits(unsigned char c){
unsigned char k;
while(c!=0){

//comparing th bits 
    k=c&1;
//shifting the bits
    c=c>>1;
    if(k==0){
        printf("0");
    }
     else{  
         printf("1");
}
} printf("\n");
}
int main(){
//reading from the standard input
    unsigned char c;
    scanf("%c",&c);
    printf("The decimal representation is: %d\n",c);
    printf("The backwards binary representation is: ");
    show_bits(c);
    return 0;
}
