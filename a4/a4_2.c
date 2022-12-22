/* CH-230-A
a4_p2.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    fgets(s,sizeof(s),stdin);
    int i;
    for(i=0;i<strlen(s);i++){
    
    if(i%2==0){
        printf("%c\n",s[i]);
    }else{
        printf(" %c\n",s[i]);
    
} } return 0;
}
/*Write a program where you read a string (which may contain spaces) from the standard input.
You can safely assume that the string will not be longer than 50 characters. Print the string on the
screen as in the following testcase.
Your solution has to satisfy the requirements from the problem description and has to pass the
following testcase and potentially other testcases which are uploaded. All characters are relevant
for passing testcases including newlines and spaces.
*/