/* CH-230-A
a3_p2.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>
 int main () {
 char ch ;
 int i,n;
 //getting the input from the keyboard
 scanf("%c",&ch);
 scanf("%d",&n);
 
//the input should range within these values as it must be in lowercase
    if(!(ch>=97 && ch<=122)){
      printf("Enter a lowercase letter\n");  
    }
/*for i<=n, sort the alphabet in descending order
  (the first one, from up-down must be the imputed letter)*/
 for(i = 0; i<=n; i++){
    printf("%c\n",ch-i);
 }
 return 0;
 }
/*Write a program where you first enter a lowercase character ch and then an integer n from the
keyboard. Print the characters ch, ch−1, ..., ch−n on the screen.
You can safely assume that the input is valid and you do not have to do any checks.*/
 
