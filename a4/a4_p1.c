/* CH-230-A
a4_p1.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<math.h>
int main(){
    
    //initializing and reading the inputs
    float lower,upper,stepsize;
    scanf("%f",&lower);
    scanf("%f",&upper);
    scanf("%f",&stepsize);
    float i;

    //for loop to procced the wanted output
    for(i=lower; i<=upper;i+=stepsize){
        // from math library
        printf("%f %f %f\n",i,i*i*M_PI,2*M_PI*i);
    }
    return 0;
}
