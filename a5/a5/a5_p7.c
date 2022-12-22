/* CH-230-A
   a5_p7.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  
      char x[50], l[50];
  //reading the input from the keyboard
    fgets(x,sizeof(x),stdin);
    x[strlen(x)-1]='\0';

    fgets(l,sizeof(l),stdin);
    l[strlen(l)-1]='\0';
  //dynamically allocating memory for the concatenation of of the strings
    char *xl = (char*)malloc(sizeof(char) *(strlen(x)+strlen(l))) ;

  //copy the first string to the char with dynamic memory
    strcpy(xl,x);
  //concatenating
    strcat(xl,l);
  printf("Result of concatenation: %s\n",xl);
  free(xl);
    return 0;
}

