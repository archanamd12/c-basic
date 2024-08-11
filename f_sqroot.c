#include<stdio.h>
#include<math.h>

int sqroot(int n){
    float  r;
    r=sqrt(n);
printf("%f",r);
return 0;
}
int main(){
    int n;
printf("enter number:");
scanf("%d",&n);
sqroot(n);
return 0;
}

