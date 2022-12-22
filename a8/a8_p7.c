/* CH-230-A
a8_p7.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<string.h>
int main(){
    char c;
    char ch;
    FILE *fp1;
    fp1=fopen("text1.txt","r");
    if(fp1==NULL){
        printf("cannot open file");//error indicator
    }
     FILE *fp2;
    fp2=fopen("text2.txt","r");
    if(fp1==NULL){
        printf("cannot open file");
    }
     FILE *fp3;
    fp3=fopen("merge12.txt","w");//writing mode
    if(fp3==NULL){
        printf("cannot open file");
    }
     

    //read line by line as long as end of file is not reached  
    while((c=fgetc(fp1))!=EOF){
      fputc(c,fp3); //printing to f3
    }
    while((ch=fgetc(fp2))!=EOF){
      fputc(ch,fp3); 
    }
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);

    return 0;
}    







/*
    fscanf(fp1,"%100s",file1);
    strcpy(file3,file1);

    FILE *fp2;
    fp2=fopen("text2.txt","r");
    if(fp2=NULL){
        printf("cannot open file");
    }
    fscanf(fp2,"%100s",file2);
   strcat(file3,file2);

    FILE *fp3;
    fp3=fopen("merge12.txt","w");
    if(fp3==NULL){
        printf("cannot open file.");
    }
 fwrite(file3,1,sizeof(file3),fp3);
 //fprintf(fp3,"%200s",file3);
 //fclose(fp1);
  //fclose(fp2);
   //fclose(fp3);
*/