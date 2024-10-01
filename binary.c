#include<stdio.h>
void main(){
    int n,rem,st[30],top=0;
printf("enter the decimal number");
scanf("%d",&n);


    while(n!=0){
        rem=n%2;
         
       st[top]=rem;
      top++;
        n=n/2;
    }top--;
    
    printf("binary");
    for(int i=top;i>=0;i--){
        printf("%d",st[i]);
    }
}