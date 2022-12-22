
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){
 int i=0;
 int res = 0;
    while (str[i]!='\n') {
     //must be a letter in acsii code, but only consonants
     if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z')){
          if (str[i]!='a' && str[i]!='o' && str[i]!='i' && str[i]!='u' 
           && str[i]!='y' && str[i]!='e'
           && str[i]!='A' && str[i]!='O' && str[i]!='I' 
          
           && str[i]!='U' && str[i]!='Y' && str[i]!='E'){
         res++;
        }
        }
        i++;
    }
    return res;
}
int main(){
    char s[200];
    //infinite loop
    while (1) {
    //read the array from the keyboard
        fgets(s,sizeof(s),stdin);
        if (s[0]=='\n') {
            break;
        }
        printf("Number of consonants=%d\n",count_consonants(s));
    }
 
    return 0;
}
