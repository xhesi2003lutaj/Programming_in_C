/* CH-230-A
a8_p5.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch,f;
//opening the file to read
  FILE *fp;
  fp=fopen("chars.txt", "r");
  if(fp==NULL){//check validity
    printf("cannot opet it.");
    return -1;
  }
  //read
  fscanf(fp,"%c%c",&ch,&f);
  FILE *fp1;
  //open file to write
  fp1=fopen("codesum.txt","w");
  if(fp1==NULL){
    printf("cannpnt open ");
    return -2;
  }//sum
  fprintf(fp1,"%d",ch+f);

    fclose(fp);
    fclose(fp1);
    return 0;
}