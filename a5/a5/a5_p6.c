/* CH-230-A
   a5_p6.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
void before_negative(int *arr,int n){
int *ptr;
 static int counter=0;
for(ptr=&arr[0];ptr<&arr[n];ptr++){
    //counter++;
    if(*ptr<0){
       
        break;
       // counter++;
    }

}
   printf("\n%ld\n",ptr-&arr[0]);
}

int main(){
    int n;
	scanf("%d",&n);
	int  *arr=malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	before_negative(arr,n);

return 0;
}