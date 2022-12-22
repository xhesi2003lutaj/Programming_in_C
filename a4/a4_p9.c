/* CH-230-A
   a4_p9.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

int greatest(int a[], int n){
    int temp = a[0];
    for(int i=1; i<n; i++){
        if (a[i]>temp) {
            temp=a[i];
        }
    }
    return temp;
}

int smallest(int a[], int n){
    int temp = a[0];
    for(int i=1; i<n; i++){
        if (a[i]<temp) {
            temp=a[i];
        }
    }
    return temp;
}

//after finding the min and max we output their product
int prodminmax(int *arr, int n){
    int x = greatest(arr, n);
    int y = smallest(arr, n);
    return x*y;
}
int main(){
    int n, i;
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &n);
    //dynamic memory allocation based on the inputed n
    int *arr = (int*)malloc(sizeof(int)*n);
    //if no input, terminate
    if(arr==NULL){
        printf("problem with allocating memory\n");
        return -1;
    }
    //for loop to get the input of the array
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    //calling our function
    printf("The product of the geratest and smallest numbers is:= %d\n",prodminmax(arr,n));
    //releasing the memory
    free(arr);
    return 0;
}