#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
struct person {
char name[30];
int age;
};
int age_compare(struct person ,struct person );
int compare_name(struct person ,struct person );

void bubbleSort(struct person* data ,int count,int(*comparer)(struct person ,struct person)){
  int swapped =1,i,x=0;
  char b[30];
  while (swapped)
  {
    swapped=0;
  for (i = 0;i<count-1;i++) {
   if(comparer(data[i],data[i+1])){
    strcpy(b,data[i].name);
    strcpy(data[i].name,data[i+1].name);
    strcpy(data[i+1].name,b);
     
    x=data[i].age;
    data[i].age=data[i+1].age;
    data[i+1].age=x;
     swapped=1;
   }
}
  count--;
  }
}
int compare_name(struct person  A,struct person  B){
  if(strcmp(A.name,B.name)>0){
    return 1;
  }
  else if(strcmp(A.name,B.name)<0){
    return -1;
  }
  else if (strcmp(A.name,B.name)==0)
  {
    return age_compare(A,B);
  }
  
}
int age_compare(struct person  A,struct person B){
  if(A.age>B.age){
    return 1;
  }
   else if(A.age<B.age){
    return -1;
   }
     
      return compare_name(A,B);
     
}

void printarr(struct person  *blaba,int n){
  struct person  *data=blaba;
  int i;
  for(i=0;i<n;i++){
    printf("%s, %d\n",data[i].name,data[i].age);
  }

}

int main(){
 
  int n;
  scanf("%d",&n);
  // getchar();
  struct person persona[n];
  // char *arr=malloc(sizeof(char)*n);
  int i;
  for(i=0;i<n;i++){
    scanf("%s",persona[i].name);
    printf("name=: %s\n",persona[i].name);
    scanf("%d",&persona[i].age);
     printf("age =%d\n",persona[i].age);  struct person persona[n];

    // getchar();

  }
  printarr(persona,n);
  bubbleSort(persona ,n,age_compare);
  printarr(persona,n);
  return 0;
}