
/* CH-230-A
a_p1.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
int main(){
    float x;
    int n,i ;
    //input the numbers from keyboard
    scanf("%f",&x); 
    scanf("%d",&n);
    //request another input if n<0
    while ( n<=0 ) {
    printf("Input is invalid, reenter value\n");
    scanf("%d", &n);
    }
    //for loop to print x n times
   for(i=0; i<n; i++){
    printf("%f\n",x);
   }
   return 0;
}
