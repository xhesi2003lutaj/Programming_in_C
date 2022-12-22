/* CH-230-A
a6_p4.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
//it will print the intermediate values


#include<stdio.h>
//i just defined a max input for the vectors
#define MAX 30
#define INTERMEDIATE//intermediate values will be shown
int main(){
    int scalar_prod;
    int v[MAX];
    int y[MAX];
    int n;
    scanf("%d",&n);
    int i;

//reading from standard input the length of the vectors
    for(i=0;i<n;i++){
        scanf("%d",&v[i]); 
    }
     for(i=0;i<n;i++){ 
        scanf("%d",&y[i]);
    }
//condition to print or not the intermediate values
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
     for(i=0;i<n;i++){ 
         int inter_prod=v[i]*y[i];
         printf("%d\n",inter_prod);
    }
   #endif
//The scalar product
    printf("The scalar product is:");
     for(i=0;i<n;i++){ 
          scalar_prod=scalar_prod+(v[i])*(y[i]);
       
     } 
    printf("%d\n",scalar_prod);
    return 0;
}