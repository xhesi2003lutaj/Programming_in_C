/* CH-230-A
a3_a11.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

//including the required libraries
#include <stdio.h>
#include <string.h>
int indexOfChar(char str[], char c)
{
	int i;
	for(i=0; i < strlen(str); i++)
	{
		if(str[i]==c)
		{
			return i;
			break;
		}
	}
	return -1;
}

int main()
{
    //assigning the max input for the arrays
	char one[100],two[100],line3[100],conc[200],ch;
	int i,j;

	fgets(one, sizeof(one), stdin);
	fgets(two,sizeof(two),stdin);

	scanf("%c",&ch);

	printf("length1=%zu\n",strlen(one)-1);
	printf("length2=%zu\n",strlen(two)-1);
	
	for(i =0; i<strlen(one)-1;i++)
	{
		conc[i] = one[i];
	} 
	
	i =strlen(one)-1;
	
	for(j =0; two[j]!='\n'; j++, ++i)
	{
		conc[i] = two[j];
	}
	conc[i] = '\0';

	//Prints concatenated string
	printf("concatenation=%s\n",conc);
	
	for(i =0; i<strlen(two);i++){
		line3[i] = two[i];
	}
	line3[i]='\0';
	printf("copy=%s",line3);

	//
	if(strcmp(one,two)>0)
	{
		printf("one is larger than two\n");
	}else if (strcmp(one,two) <0)
	{
		printf("one is smaller than two\n");
	}else 
	{
		printf("one is equal to two\n");
	}
	
	if(indexOfChar(two,ch) == -1)
	{
		printf("The character is not in the string\n");
	}else
	{
		printf("position=%d\n",indexOfChar(two,ch));	
	}
	return 0;
}

/*#include <stdio.h>
#include <string.h>
int main(){
char str1[100],str2[100],str3[200];
fgets(str1,100,stdin);
str1[strlen(str1)-1]='\0';


fgets(str2,100,stdin);
str2[strlen(str2)-1]='\0';

int i,n;
i=strlen(str1);
n=strlen(str2);
printf("first str lth%d\n",i);
printf("second str lth%d\n",n);
//strcpy(str3,str1);
strcat(str1,str2);
printf("%s\n",str1);
printf("%ld\n",strlen(str1));
if(str1<str2){
    printf("1<2\n");
}else{
    printf("not\n");
}
char c;
scanf("%c",&c);
getchar();
int position=0;
for(i=0;i<100;i++){
    if(str2[i]==c){
    position=i;
    break;
    }
}
printf("%d\n",position);

} 
}
*/