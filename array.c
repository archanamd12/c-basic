#include<stdio.h>
void main(){
    int a[10],i;
    printf("enter array elements");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
     }
    printf("reversed elements are:\n");
    for(i=4;i>=0;i--){
        printf("%d\n",a[i]);
    }


}