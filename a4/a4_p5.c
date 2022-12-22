/* CH-230-A
a4_p5.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){
//the powinter that points to the address of the chars in the array
    char *p = str;
    int i=0;
    int res = 0;
     while (*(p+i)!='\n') {
     //must be a letter in acsii code, but only consonants
     //in this case we are also using a pointer to access the i entry of the string
        if((*(p+i)>='a' && *(p+i)<='z')|| (*(p+i)>='A' && *(p+i)<='Z')){
        if (*(p+i)!='a' && *(p+i)!='o' && *(p+i)!='i' && *(p+i)!='u' && *(p+i)!='y' && *(p+i)!='e'
                && *(p+i)!='A' && *(p+i)!='O' && *(p+i)!='I' && *(p+i)!='U' && *(p+i)!='Y' && *(p+i)!='E') {
            res++;
        }
        }
        i++;
    }
    return res;
}
int main(){
    char s[200];;
    //infinite loop   
    while (1) {
 //read the array from the keyboard       
  fgets(s,sizeof(s),stdin);

//if no inputet chars it will terminate
        if (s[0]=='\n') {
            break;
        }
        printf("Number of consonants=%d\n",count_consonants(s));
    }

    return 0;
}