int print_rec(int n,int i){
 while(i<n){
     
 if(n%i==0){
     return 0;
 }
 else if(n%i!=0){
 
     print_rec(n,i+1);  
 }
 return 1;
 }

}
int main(){
 int n;
 scanf("%d",&n);
 int z=0;
printf("%d\n",print_rec(n,z+1));
return 0;
}