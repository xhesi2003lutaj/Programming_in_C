/* CH-230-A
a3_p9.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include <stdio.h>

double sum25(double v[], int n)
{
	double sum;
if(n<6){
	printf("one or two positions invalid");
      return -111;
}else{
sum=v[2]+v[6];
} return sum;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	double arr[20];
	for(i=0;i<=n;i++){
		scanf("%lf",&arr[i]);
		printf("sum=%f",sum25(arr,n));
	}
	return 0;
}
/*Write a program which reads from the keyboard an integer value n followed by n double values
as elements of an array with not more than 20 elements. Write also a function with the prototype:
double sum25(double v[], int n);
which computes and returns the sum of the elements in v at position 2 and position 5. Check that
positions 2 and 5 are valid within v, if not then print a corresponding message on the screen. In
this case the function should return the value −111. Print the sum on the screen.
Your solution has to satisfy the requirements from the problem description and has to pass the
following testcase and potentially other testcases which are uploaded. All characters are relevant
for passing testcases including newlines and spaces.
Testcase 3.9: input
6
1.5
1.5
1.5
1.5
1.5
-1.5
Testcase 3.9: output
sum=0.000000
*/