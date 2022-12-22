/* CH-230-A
a4_p8.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
void print_matrix(int m[30][30]){
	int i,j;
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			printf("%d ",matrix[i][j]);
}

#include<stdio.h>
int main(){
//declaring the array
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
   //displaying array elements
   printf("The entered matrix is:\n");
	
			
		}

		printf("\n");
	}
	//displaying the elements under the secondary diagonal
	printf("Under the secondary diagonal:\n");
	for(i=0;i<n;i++){
		for(j = 0;j<n; j++){
			if(i+j>=n){
				printf("%d ",matrix[i][j]);
			}
		}
	}printf("\n");
   return 0;
}