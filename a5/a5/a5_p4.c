/* CH-230-A
   a5_p4.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>
//prototype to be called later
void divby5(float arr[], int size){
    int i;
    for(i=0; i<size; i++){
        arr[i]/=5.0;
    }

}
   int main(){
     int i,j;
     int n ;
//reading the number from keyboad
   scanf("%d",&n);
   float *arr;
//allocating memory for the array
  arr = (float*) malloc(sizeof(float) * n) ;
    if (!arr)
    {
      return -1;
    }
    
  //reading input for the array
   for(i=0;i<n;i++){
  scanf("%f",&arr[i]);
  }
 
  printf("Before:\n");
  for(j=0;j<n;j++){
  printf("%.3f ",arr[j]);

  }printf("\n");

 printf("After:\n");//newline
 //calling the function
    divby5(arr,n);
   for(j=0;j<n;j++){
  printf("%.3f ",arr[j]);
  }
   free(arr);
   printf("\n");
	
   return 0;
   }
