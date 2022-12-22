/* CH-230-A
a5_p8.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
//fs to read the matixes
void read_matrix(int **m,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
//fs to print the matrix
void print_matrix(int **m,int row, int col){
    //printf("kbiuvue\n");
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",m[i][j]);
            
        }printf("\n");
    }
}
//multiplying the matrix
void multply(int **m1,int **m2,int **m12,int n,int m,int p){
    int i,j,k;
//initially assigning the values to 0 not to face problem wen multiplying
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
           m12[i][j]=0;
        }
    }
//for loop to multiply the matrix
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                for(k=0;k<p;k++){
                    m12[i][k]+=m1[i][j]*m2[j][k];
                }
            }
        }
}
int main(){
//reading the values from the input
	int n,m,p,i;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);
//allocating memory for the arrays
    int** m1 = malloc(sizeof(int*)*n);
	// printf("jhjhh1\n");
	for(i=0; i<n; i++){
		m1[i] =malloc(sizeof(int)*m);
		// printf("jhjhh2\n");
	}
    int** m2=malloc(sizeof(int*)*m);
    // printf("jhjhh3\n");
    for(i=0;i<m;i++){
        m2[i]=malloc(sizeof(int)*p);
    }
    // printf("jhjhh4\n");
    int** m12=malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        // printf("jhjhh5\n");
        m2[i]=malloc(sizeof(int)*p);
    }
//calling the functions 
    read_matrix(m1,n,m);
    // printf("jhjhh6\n");
    read_matrix(m2,m,p);
    // printf("jhjhh7\n");
    
    printf("Matrix A:\n");
    print_matrix(m1,n,m);
    // printf("jhjhh9\n");
    printf("Matrix B:\n");
    print_matrix(m2,m,p);


    multply(m1,m2,m12,n,m,p);
    // printf("jhjhh8\n");
    // printf("jhjhh10\n");
   printf("The multiplication result AxB:\n");
    print_matrix(m12,n,p);
    

    for (i = 0; i < n; i++)
    {
        free(m1[i]);
        free(m1);
    }
    for (i = 0; i < m; i++)
    {
        free(m2[i]);
        free(m2);
    }
    for (i = 0; i < n; i++)
    {
        free(m12[i]);
        free(m12);
    }
    return 0;
}
