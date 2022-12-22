/* CH-230-A
a6_p2.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
//&1,because in binary 1=00..01 and it will return 1 
//as the last digit of our input only if it is also 1 (1&1=1)
#define find(A) (A&1)
int main(){
    unsigned char c;
    scanf("%c",&c);
    printf("The decimal representation: %d\n",c);
    printf("The least significant bit is: %d\n",find(c));
  return 0;

}