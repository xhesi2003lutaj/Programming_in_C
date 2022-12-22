/* CH-230-A
a4_p6.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

void greatest(int *arr, int n){
	if(n <2){
	printf("The number of integers you entered is lower than 2!!\n");
    //it will terminate if the input is not as required
		return ;
	}
		int largest1, largest2,temp;
	 largest1 = arr[0];
    largest2 = arr[1];
	
    if (largest1 < largest2)// we make sure that nr1 is bigger than nr2
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 //comparing the numbers in the array n
    for (int i = 2; i <n; i++)
    {
        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2 && arr[i] != largest1)
        {
            largest2 = arr[i];
        }
    }
	printf("The greatest num is:= %d\n", largest1);
	printf("The second greatest number is:= %d\n", largest2);
}
int main(){
	int n, i;
    printf("How many numbers do you want to enter?\n");
	scanf("%d", &n);
//dynamic memory allocation based on the inputed n
	int *arr = (int*)malloc(sizeof(int)*n);
//if no input, terminate
	if(arr==NULL)
		exit(1);
//for loop to get the input of the array
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
//calling our function
	greatest(arr, n);
	free(arr);//releasing the memory
	return 0;
}
/*easiest
# include <stdio.h>
 #include <stdlib.h>
 #include<string.h>
 int max(int arr[],int n){
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
 }
 int main(){
 int *arr;
 int n;
 scanf("%d",&n);
 arr=malloc(sizeof(int)*n);
 for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
 }
printf("%d\n",max(arr,n));
 return 0;
 }
*/