/* CH-230-A
a5_p10.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include<stdlib.h>

void print(int x){
    //dont print 0
    if(x==0){
        exit(0);
    
    }
    if(x==1){
    printf("%d.",x); 
    return;
    }
  printf("%d,",x);
  //calling the recursive fs
 print(x-1);
}

int main()
{
    //reading the input int
    int x;
    scanf("%d",&x);
//calling the function
    print(x);

    return 0;
}
