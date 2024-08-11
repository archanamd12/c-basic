#include<stdio.h>
void main(){
    int i,n,flag;
    

    for(i=10;i<=50;i++){
        flag=0;
    for(n=2;n<i/2;n++){
        if(i%n==0){
            flag=1;
           break;
        }

    }
    if(flag==0){
        printf("%d\n",i);
    }
    }
    
    

    }
   

    