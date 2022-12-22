/* CH-230-A
a4_p7.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
int main(){
    int i,j,n;
	scanf("%d",&n);
	if(n>30){
		printf("Enter a valid number of rows and columns,<30");
		return -1;
	}
	//reading the dimensions of the matrix from the keyboard
	int matrix[n][n];
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			scanf("%d",&matrix[i][j]);
      }
   }
   //Displaying array elements
   printf("The entered matrix is:\n");
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			printf("%d ",matrix[i][j]);
			
		}

		printf("\n");
	}
	//displaying the elements under the main diagonal
	printf("Under the main diagonal:\n");
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			if(i>j){
				printf("%d ",matrix[i][j]);
		}	
		}	
	}
	printf("\n");
   return 0;
}