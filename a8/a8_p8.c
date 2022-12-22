/* CH-230-A
a8_p8.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

   FILE *fp;
	int count = 0;
	char str[40]; 
	char c;    

	//read the name and open file
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	fp = fopen(str,"r");
	if(!fp)
	{
		printf("%s\n", "Can not open file!\n");
		exit(1);
	}
    
    while((c=fgetc(fp))!=EOF){
        //count only when it faces end of word marks
        if(c==' ' || c==',' || c== '?' ||c=='!' || c=='.' 
                                     ||c=='\t' || c=='\r' ||c=='\n'){
            //while c is one of the following it will move to the next character
            // ,and count if that charcter was a end of word indicator
            while((c==' '  || c==',' || c== '?' ||c=='!' 
                        || c=='.' ||c=='\t' || c=='\r' ||c=='\n')&&c!=EOF){
                c=fgetc(fp);
            }
            count++;
        }
    }
    printf("The number of words in the file is %d\n",count);

    fclose(fp);
    return 0;
}
