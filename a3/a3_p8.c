
/* CH-230-A
a3_a8.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
float sum(int n, float arr[]){
	int i;
	float s = 0;
	for(i=0; i<n; i++)
		s+=arr[i];
	return s;
}
float avg(int n, float arr[]){
	int i;
	float s = 0;
	for(i=0; i<n; i++)
		s+=arr[i];
		float avg=s/n;
	return avg;

}
int main(){
	float arr[10];
	int i;
	int count = 0;
	printf("Elements of array:\n");
	for(i=0; i<10; i++){
		scanf("%f", &arr[i]);
		if(arr[i]==-99.0){
			arr[i]=0;
		//count=i;
			break;	
		}
		count++;
	}
	printf("Sum = %f\n", sum(count, arr));
	printf("Average = %f\n", avg(count, arr));
	return 0;
}
/*
float sum(float a[], int counter);
float avg(float a[], int counter);

int main(){
	
	float a[10];
	int counter, i = 1, pass = 0;
	// Get first value
	scanf("%f",&a[0]);
	// Check validity
	if(a[0] == -99.0)
	{
		pass = 1;
		counter++;
	}

	while(a[i-1]!= -99.0 && !pass)
	{
		if(i>=10){
			break;
		}
		// Read array entry	
		scanf("%f",&a[i]);
		// Check validity
		if(a[i] != -99.0)
		{
			counter ++;
		}
		i++;
	}
	printf("sum = %f\naverage = %f\n",sum(a,counter),avg(a,counter));
	
	return 0;
}

float sum(float a[], int counter){
	int i,s=0;
	for (i =0; i<counter;i++){
		s+=a[i];
	}
	return s;
}
float avg(float a[], int counter){
	int i,s=0;
	for (i =0; i<counter;i++){
		s+=a[i];
	}if(counter ==0){
		return 0;
	}
	return (float)s/counter;
}
Write a program where you can enter from the keyboard up to 10 floats. If the number entered
is equal to −99.0, stop reading numbers from the keyboard and compute the sum and average of
all values (excluding −99.0) using two functions (one for the sum and one for the average). Print
your results on the screen.
You can safely assume that the input will be valid.
Make sure you consider all the cases: less than 10 numbers might be entered. After all the numbers have been entered you need to make sure that the sum and average are computed.
*/


