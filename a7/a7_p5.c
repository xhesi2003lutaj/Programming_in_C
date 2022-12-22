/* CH-230-A
a6_p9.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

//function pointer to sort in ascending order
int asc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
// int acending(const void*a,const void *b){
//     const int *a1=((const int *)a);
//     const int *b1=((const int *)b);
//     if(*a1>*b1){
//         return 1;

//     }if (*a1==*b1){
//         return 0;
//     }
//     if(*a1<*b1){
//         return -1;
//     }
//function pointer to sort in descending order
int desc(const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

//printing the array
void print(int *arr,int n){
   int i;
   for(i= 0;i< n;i++) {
      printf("%d ",arr[i]);
   }

printf("\n");
}

int main () {


  int n;
  scanf("%d",&n);
  int arr[n];
  int i;
  for( i= 0 ; i< n; i++ ) {
   scanf("%d",&arr[i]);
}
   char ch;
   while(1){
   scanf("%c",&ch);

    switch(ch){
        case 'd':
         qsort(arr, n, sizeof(int), desc);//extra random nr
         print(arr,n);
         break;
        
        case 'a':
         qsort(arr, n, sizeof(int), asc);
         print(arr,n);
         break;
    
         case 'e':
         exit(1);
         break;
    
    }
   }
   return 0;
}