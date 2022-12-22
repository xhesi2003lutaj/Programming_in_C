/* CH-230-A
   a5_p9.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
//fs to read the elements for the array
void elements(int ***array,int x, int y, int z){
    int i,j,k; 
    for( i=0; i<x; i++){
        for( j=0; j<y; j++){
            for( k=0; k<z; k++){
                scanf("%d",&array[i][j][k]);
            }
        }
    }
}
//fs to print the elemets of the array
void print_elements(int ***array,int x, int y, int z){
    int i,j,k; 
    for( k=0; k<z; k++){
        printf("Section %d:\n",k+1);
        for( i=0; i<x; i++){
            for( j=0; j<y; j++){
                printf("%d ",array[j][i][k]);
            }printf("\n");
        }   
    }
}

int main(){
//read dimensions of the array from the keyboard
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
//allocate memory for the array
    int*** a=(int***)malloc(sizeof(int**)*x);
    if(a==NULL){
        exit(1);
    }
    for(int i=0; i<x; i++){
        a[i]=(int**)malloc(sizeof(int*)*y);
         if(a[i]==NULL){
        exit(2);
    }
        for(int j=0; j<y; j++){
            a[i][j]=(int*)malloc(sizeof(int)*z);
            if(a[i][j]==NULL)
             exit(3);
        }
    }
//calling the fss
    elements(a,x,y,z);
    print_elements(a,x,y,z);

//free the array
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            free(a[i][j]);
            
        }free(a[i]);
    }

 free(a);
    
    return 0;

}
/*
BERING
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int*** a=malloc(sizeof(int**)*x);
    for(int i=0; i<x; i++){
        a[i]=malloc(sizeof(int*)*y);
        for(int j=0; j<y; j++){
            a[i][j]=malloc(sizeof(int)*z);
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(int i=0; i<z; i++){
        printf("Section %d:\n",i+1);
        for(int j=0; j<y; j++){
            for(int k=0; k<x; k++){
                printf("%d",a[k][j][i]);
            }
            printf("\n");
        }
    }
    return 0;

}

 UNE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int p;
    scanf("%d",&p);
      int i,j,k;
  int ***martix1=malloc(sizeof(int**)*n);
  for(i=0;i<n;i++){
    
        martix1[i]=malloc(sizeof(int*)*m);
    
    for(j=0;j<m;j++){
       martix1[i][j]=malloc(sizeof(int)*p);
    }
  }
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        for(k=0;k<p;k++){
            scanf("%d",&martix1[i][j][k]);
        }
    }
}
for(i=0;i<p;i++){
    printf("Section:%d \n",i+1);
    for(j=0;j<m;j++){
        for(k=0;k<n;k++){
            printf("%d ",martix1[k][j][i]);
        }printf("\n");
    }
}

for(i=0;i<n;i++){
    free(martix1[i][j]);
}
for(j=0;j<m;j++){
    free(martix1[j]);
}free(martix1);


    
    return 0;
}


*/
