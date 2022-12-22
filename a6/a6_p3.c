/* CH-230-A
a6_p3.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
//macros to find the max
#define MIN1(a,b) ((a<b ?a :b))
#define MAX1(a,b) ((a>b ? a : b))

//find the min of 3 nr using the min1 definition of smallest
#define MIN2(a,b,c) (MIN1(MIN1(a,b),c))
#define MAX2(a,b,c) (MAX1(MAX1(a,b),c))
//midrange formula
#define MID_RANGE(a,b,c)((MIN2(a,b,c)+MAX2(a,b,c))/2.0)

int main(){
    
    int x,y,t;
    scanf("%d%d%d",&x,&y,&t);
    printf("The mid-range is: %lf\n", MID_RANGE(t,x,y));
    
    return 0;

}
