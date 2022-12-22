/* CH-230-A
a8_p6.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<string.h>
int main(){
    char fname[20];
    char fname1[20];
    double a,b;
    //fgets(fname,20,stdin);
    //fgets(fname1,20,stdin);
    
    //read the names of the files
    scanf("%20s",fname);
    scanf("%20s",fname1);
    //such that the user doesn't need to write txt
    strcat(fname,".txt");
    strcat(fname1,".txt");

    FILE *lt;
    lt=fopen(fname,"r");
    if(lt== NULL){
        printf("error opening the file.");
  return -1;
    }
    fscanf(lt,"%lf",&a);
    //next fle
    FILE *input;
    input= fopen(fname1,"r");
    if(input==NULL){
        printf("error opening file");
        return -2;
    }
    fscanf(input,"%lf",&b);
    //open to write
    FILE *fp;
    fp=fopen("results.txt","w");
    if(fp==NULL){
        printf("cannot open file");
        return -3;
    }
    //compuations
    fprintf(fp,"%lf\n",a+b);
    fprintf(fp,"%lf\n",a-b);
    fprintf(fp,"%lf\n",a*b);
    fprintf(fp,"%lf\n",a/b);

    fclose(lt);
    fclose(input);
    fclose(fp);
     
    return 0;
}