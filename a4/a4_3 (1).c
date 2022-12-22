#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float geometric_mean(float arr[], int num){
    float p = 1;
    for(int i=0; i<num; i++){
        p = p * arr[i];
    }
    return pow(p, 1.0/num);
}
float highest(float arr[], int num){
    int res = arr[0];
    for(int i=0; i<num; i++){
        res =  fmax(res, arr[i]);
    }
    return res;
}
float lowest(float arr[], int num){
    int res = arr[0] ;
    for(int i=0; i<num; i++){
        res =  fmin(res, arr[i]);
    }
    return res;
}
float sum(float arr[], int num){
    float sum = 0;
    for(int i=0; i<num; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    float a[15];
    char command;
    int size = 15;
    for(int i=0; i<15; i++){
        scanf("%f",&a[i]);
        if (a[i]<0) {
            size = i;
            break;
        }
    }
    getchar();
    scanf("%c",&command);
    if (size == 0) {
        printf("no element in the array\n");
        return -1;
    }
    switch (command) {
        case 'm':
            printf("avg = %f\n",geometric_mean(a, size));
            break;
        case 'h':
            printf("high = %f\n",highest(a, size));
            break;
        case 'l':
            printf("low = %f\n",lowest(a, size));
            break;
        case 's':
            printf("sum = %f\n",sum(a, size));
            break;
        default:
            printf("command unknown\n");
            break;
    }
    return 0;
}
