/* CH-230-A
a7_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 2009
//uppercase converter function
void uppercase(char *ch){
    int i=0;
    while(ch[i]!='\0'){
    printf("%c",toupper(ch[i]));
        i++;
    }
}
//lowercase converter
void lowercase(char *ch){
    int i=0;
    while(ch[i]!='\0'){
    printf("%c",tolower(ch[i]));
        i++;
    }
     
}
//from upper to lower and from lower to uppper converter
void switch_up_low(char *ch){
    int i=0;
    while(ch[i]!='\0'){
    if(ch[i]==tolower(ch[i])){
    printf("%c",toupper(ch[i]));
      i++;
        }
     else if(ch[i]==toupper(ch[i])){
            
      printf("%c",tolower(ch[i]));
            i++;
        }
    
    }
   }
//quit function
void quit(char *ch){
    exit(1);
}
//function pointer
void(*ptr[4])(char *ch)={
    uppercase,lowercase,switch_up_low,quit
};

int main(){
   char ch[MAX];
   fgets(ch,MAX,stdin);
   ch[strlen(ch)]='\0';
   int n;
//never ending loop
   while(1){
     scanf("%d",&n);
     ptr[n-1](ch);
   
   }

    return 0;
}