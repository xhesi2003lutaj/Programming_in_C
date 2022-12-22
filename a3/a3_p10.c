/* CH-230-A
a3_a10.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
float product(float a, float b){
	return a*b;
}
void productbyref(float a, float b, float *p){
	float prod=a*b;
	*p=prod;
	
}void modifybyref(float *a, float *b){
	int c=3,d=11;
	*a+=c;
	*b+=d;


}
int main(){
  float a;
  float b;
  float p;
  scanf("%f%f",&a,&b);
  float c=product(a,b);
  printf("the res %f\n",c);
  productbyref(a,b,&p);
  printf("prod by ref%f \n",p);
  modifybyref(&a,&b);
  printf("new values%f\n%f\n",a,b);
	return 0;
}



/*

Write a program which reads two float values from the keyboard. Then write three functions.
The first function should return the product of the two float values and should have the prototype:
float product(float a, float b);
The second function should return the product of the two float values by reference and should
have the prototype:
void productbyref(float a, float b, float *p);
The third function should add 3 to the first float and 11 to the second float and return the change
by reference. It should have the prototype:
void modifybyref(float *a, float *b);
Show that the calls of the first two functions have the same effect. Also show what is the effect of
calling modifybyref.
You can safely assume that the input will be valid.*/