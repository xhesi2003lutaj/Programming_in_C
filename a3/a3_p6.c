
/* CH-230-A
a3_p6.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>

//conversion function
float to_pounds(int kg, int g){
//inserting the conversion values(*2.2)
	float pounds = kg *2.2 + g *2.2*0.001;
	return pounds;
}

int main() 
{
	//declaring the variables
	int kg,g;	
	
	//reading the input from the keyboard
	scanf("%d",&kg);
	scanf("%d",&g);
	
	//printing the value in pounds
	printf("Result of conversion: %f\n",to_pounds(kg,g));
	
	return 0;
}

/*Write a program that converts the units of mass kg and g to pounds. First read the weight of an
object expressed by values for kilograms and grams from the keyboard and convert the units of
mass using the function (written by you as well)
float to_pounds(int kg, int g);
that does the actual conversion. Note that:
1 kilogram = 2.2 pounds
You can safely assume that the input will be valid.
Your solution has to satisfy the requirements from the problem description and has to pass the
following testcase and potentially other testcases which are uploaded. All characters are relevant
for passing testcases including newlines and spaces.
Testcase 3.6: input
5
100
Testcase 3.6: output
Result of conversion: 11.220000
*/