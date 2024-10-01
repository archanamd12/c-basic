#include<stdio.h>
void main(){
int a[10],i,n=5,k,count=0;
//k = element to be searched 
    printf("enter array elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
     }

     printf("\nenter elements to be searched:");
scanf("%d",&k);

for(i=0;i<n;i++){

    if(a[i]==k){
        count++;
    }
    
}
printf(" number frequency is %d",count);

}
