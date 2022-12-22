
/* CH-230-A
a1_p3.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */


#include <stdio.h>
int main() {                           
int a = 5;
float b = 13.5;
float result;  //Declaring a variable which we know is a decimal.
result= a / b;
printf("The result's %lf\n",result); //Instead of %d(decimal notation),
                                      //we must use either %f or %lf(both same size)
return 0;
}