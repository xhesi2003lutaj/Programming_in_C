
/* CH-230-A
a1_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */


#include<stdio.h>
int main(){//declaring the variables from line 10 to 18
    int x=17.0;
    int y=4.0;
    int sum;
    sum=x+y;
    int product=x*y;
    int difference;
    difference=x-y;
    float division=17.0/y;
    int result=x%y;
    printf("x=%d\ny=%d\n",x, y);//printing the output of the variables
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%lf\n", division);
    printf("remainder of division=%d\n", result);
    
    return 0;
}