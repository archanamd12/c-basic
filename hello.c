#include<stdio.h>
#include<math.h>
void main(){
int n,temp,sum=0,c,r;

printf("enter number:");
scanf("%d",&temp);
n=temp;
while(n>0){
r=n%10;
c=pow(r,3);
sum=sum+c;
n=n/10;

}

if(temp==sum){
    printf("armstrong");
}
else{
    printf("not armstrong");
}

}