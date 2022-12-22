
/* CH-230-A
a3_p7.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>
#include <string.h>
void print_form(int n, int m, char c){
int i, j;
for(i=m;i<=n+m-1;i++){
    for(j=0; j<i;j++){
        printf("%c",c);

    }printf("\n");
}
}

int main(){
int n;
scanf("%d",&n);
int m;
scanf("%d",&m);
char c;
getchar();
scanf("%c",&c);
print_form(n,m,c); 
 
    return 0;
}
/*Write a program which reads two integers n, m and a character c from the keyboard. This program should define and call a function with the prototype:
void print form(int n, int m, char c);
which prints a trapezoid of height n, bases m andconsisting of the character c as in the
following testcase.
Testcase 3.7: input
4
3
$
Testcase 3.7: output
$$$
$$$$
$$$$$
$$$$$$
*/