/* CH-230-A
a3_p3.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>

	float convert(int cm)
{
    float km = (float) cm / 100000;
    return km;
}

     int main() 
{	
	
	int cm;
	//reading the value in cm from the keyboard
	scanf("%d",&cm);

	
	// The value in km is printed
	printf("Result of conversion: %f\n",convert(cm));
		
	return 0;
}
	
