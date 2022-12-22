/* CH-230-A
a8_p9.c
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
   char buffer[64];
   int n,i;
   scanf("%d",&n);
   getchar();
   char name[30];
   char x='\n';
   char display[100];


   FILE *f3;
   f3=fopen("output.txt","wb");
   if(f3==NULL){
    printf("error");
   }
  //read n file names
  for(i=0;i<n;i++){
    FILE *p;
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0'; 
    p=fopen(name,"rb");
    if(p==NULL){
      printf("error2");
      exit(1);
    }

    size_t size=fread(buffer,sizeof(char),64,p);
    fwrite(buffer,size,1,f3); //writing in the file
    fclose(p);
  fputc(x,f3);
    //fwrite(&x,sizeof(char),1,f3); 
  }
    fclose(f3);

  f3=fopen("output.txt","rb");//read binary
  if(f3==NULL){
    printf("cannot open file");
    exit(1);
  }
  printf("Concating the content of %d files ...\n",n);
  printf("The result is:\n");
  //fwrite(f3,sizeof(char),64,stdout);
  
  //reading to a new array and printing on the screen
  fread(display,1,100,f3);
  printf("%s\n",display);
  fclose(f3);
  printf("The result was written into output.txt\n");

    return 0;
}