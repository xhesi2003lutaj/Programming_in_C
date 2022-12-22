/* CH-230-A
a4_p11.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <string.h>

// defining the prototype
int count_lower(char* str)
{
    char *ptr=str;
    int i, lower = 0;
    for (i = 0; i <=strlen(str); i++)
    { 
    if(*(ptr+i)>='a' && *(ptr+i)<='z'){
    lower++;
}
  
   
} return lower;
}
int main()
{

    char str[50];
  int i;
    
        printf("Enter any string: ");
        fgets(str,sizeof(str), stdin);
         
        str[strlen(str)-1]='\0'; 
            if (strlen(str)==0) {
        return -1;
}      printf("the number of lower case chars:%d ",count_lower(str));

    
//count lower(char* str)
       return 0;
}