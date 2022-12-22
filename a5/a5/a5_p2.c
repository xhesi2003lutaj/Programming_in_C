/* CH-230-A
   a5_p2.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */

#include<stdio.h>
//prototype to be called later
void divby5(float arr[], int size){
    for(size=0; size < 6; size++){
        arr[size]/=5;
    }

}
  int main(){
    //the array
    float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int i;
     
    printf("Before:\n");
//for loop to read the array of 6 floats
    for(i=0;i<6;i++){
    printf("%0.3f ",arr[i]);
    }
     printf("\n");

    printf("After:\n");//newline
    //calling the function
    divby5(arr,6);
    for(i=0;i<6;i++){  
     printf("%0.3f ",arr[i]);
         }
    printf("\n");
	return 0;
}

