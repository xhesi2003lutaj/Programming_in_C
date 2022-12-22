/* CH-230-A
a6_p7.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>

void show_bits(unsigned char c){
int i;
unsigned char mask,k;
for(i=7;i>=0;i--){
//we start reading from the right 
    mask=1<<i;
// compare all bits with the shifting mask to the left
    k=c&mask;
    if(k==0){
        printf("0");
    }
     else{   printf("1");
}
}printf("\n");
}

void set3bits(unsigned char c, int a, int b, int d){
    int i;
unsigned char mask,k;
//for loop to iterate through all the bits
    for(i=7;i>=0;i--){
//shifting to the left by the inputed variable
       c|=(1<<a);
       c=c|(1<<b);
       c=c|(1<<d);
       mask=1<<i;
       k=c&mask;

       if(k==0){
        printf("0");
       }else{
        printf("1");
       }
      }printf("\n");
}
int main(){
unsigned char  c;
scanf("%c",&c);
int a,b,d;
scanf("%d%d%d",&a,&b,&d);

printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    show_bits(c);

  printf("After setting the bits: ");
  set3bits(c,a,b,d);
    return 0;
}