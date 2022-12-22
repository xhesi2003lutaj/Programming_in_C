/* CH-230-A
   a5_p5.c
   Xhesilda Lutaj
   x.lutaj@jacobs-university.de */
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
double dot_product(double v[],double w[],int length){
  double sum=0;
  for(int i=0;i<length;i++){
    sum+=v[i]*w[i];
  }return sum;
}


double highest(double b[], int num){
    double max = b[0];
    for(int i=0; i<num; i++){
        if(b[i]>max){
        max=b[i];
    }}
    return max;
}


double smallest(double b[], int num){

    double smallest = b[0];
    for(int i=0; i<num; i++){
        if (b[i]<smallest)
        {
           smallest=b[i];
           
        }
        
    }
    return smallest;
}
int smallest_index(double a[],int num){
    int i,minindex;
    double min=a[0];
    for(i=0;i<num;i++){
        if(a[i]<min){
            min=a[i];
minindex = i;
        }
    }
    	
			
			
	return minindex;
}
int largest_index(double a[],int num){
    int i,largestindex;
    double max=a[0];
    for(i=0;i<num;i++){
        if(a[i]>max){
            max=a[i];
            largestindex = i;
        }
    }
	return largestindex;
}
int main(){
    int n;
    scanf("%d",&n);
    double v[n];
    for(int i=0; i<n; i++){
//reads the array of floats
        scanf("%lf",&v[i]);
      
    } 
    double w[n];
    for(int i=0; i<n; i++){
        scanf("%lf",&w[i]);

    }
   double result=dot_product(v,w,n);
   printf("Scalar product=%lf\n",result);
   printf("The smallest = %lf\n",smallest(v, n));
   printf("Position of smallest = %d\n",smallest_index(v,n)); 
   printf("The largest = %lf\n",highest(v, n));
   printf("Position of largest = %d\n",largest_index(v,n)); 
   printf("The smallest = %lf\n",smallest(w, n));
   printf("Position of smallest = %d\n",smallest_index(w,n));
   printf("The largest = %lf\n",highest(w, n));
   printf("Position of largest = %d\n",largest_index(w,n)); 
    return 0;
}