/* CH-230-A
a6_p6.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include<stdio.h>

void show_bits(unsigned char c){
int i;
unsigned char mask,k;

//we want the binary representation of the nr in 8 bits
for(i=7;i>=0;i--){
    int j=i;
//we start reading from the right so we shift to the left
    mask=1<<j;//comparing all the bits of the number
//and we compare all bits with the shifting mask
    k=c&mask;
 
    if(k==0){
        printf("0");
    }
     else{   printf("1");
}
}
}
int main(){
    unsigned char c;
    scanf("%c",&c);
    printf("The decimal representation is:%d\n",c);
    printf("The binary representation is: ");
    show_bits(c);
    return 0;
}
