/* CH-230-A
a4_p10.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<math.h>

//prototyping and defining
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb){
//the computations to be performed
    *prod=a*b;
    *div=a/b;
    *pwr = (float)pow(a,b);
    *invb=1/b;
}
int main(){

    float a,b,prod,div,pwr,invb;
//reading the floats
    scanf("%f",&a);
    scanf("%f",&b);
//calling the function
    proddivpowinv(a, b, &prod,&div,&pwr,&invb);
     printf("%f\n",prod);
     printf("%f\n",div);
     printf("%f\n",pwr);
     printf("%f\n",invb);
    return 0;
}