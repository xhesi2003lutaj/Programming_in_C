/* CH-230-A
   a4_p12.c
   Xhesilda Lutaj.B
   x.lutaj@jacobs-university.de */
#include<stdio.h>
#include<string.h>
//prototype to be called later
void replaceAll(char *str, char c, char e){
    int i = 0;
    // runs till end of string
    while(str[i] != '\0')
    {
        // If occurrence of character is found
        if(str[i] == c)
        {//relace with the new
            str[i] = e;
        }
        i++;
    }    
}
int main(){
    //array of 80 chars max
    char str[80],c,e;
//it will loop until the entered string =loop
    while (1) {
        printf("Enter any string: ");
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1]='\0';
        if (strcmp(str,"stop")==0) {
            printf("stoping\n");
            return 0;
        }
        printf("Enter character to replace: ");
        scanf("%c",&c);
        getchar();
        printf("Enter character to replace '%c' with: ", c);
        scanf("%c",&e);
        getchar();
        printf("The entered string before modification: %s \n",str);
        replaceAll(str, c, e);//calling the function
        printf("String after replacing '%c' with '%c': %s \n" , c, e, str);
    }
    return 0;
}