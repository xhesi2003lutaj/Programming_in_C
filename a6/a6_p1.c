/* CH-230-A
   a6_p1.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
#include<stdio.h>

//macro to swap the input
#define SWAP(x,l,data_type) do{data_type temp=x; x=l; l=temp;} while(0)
int main(){
        int x,l;
        double i,r;

        scanf("%d",&x);
        scanf("%d",&l);
        scanf("%lf%lf",&i,&r);
        //using the macro
        SWAP(x,l,int);
        SWAP(i,r,double);

        printf("After swapping:\n");
        printf("%d\n%d\n%.6lf\n%.6lf\n",x,l,i,r);
        return 0;
    }
 
/*
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int m = 10, n = 20;
    printf("m = %d\n", m);
    printf("n = %d\n\n", n);

    swap(&m, &n);    //passing address of m and n to the swap function
    printf("After Swapping:\n\n");
    printf("m = %d\n", m);
    printf("n = %d", n);
    return 0;
}

/*
    pointer 'a' and 'b' holds and 
    points to the address of 'm' and 'n'
    
    void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/


