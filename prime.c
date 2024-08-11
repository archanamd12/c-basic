#include<stdio.h>
 void main(){
    int n,flag=0;
    printf("enter number:");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
      if(n%i==0){
        flag=1;
       break;
      }
      }


if(flag==1){
    printf(" not prime");

}else{
    printf(" prime");
}
}