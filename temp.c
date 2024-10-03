#include<stdio.h>
#include<math.h>

int temp(int n){
    if(n>35){
        printf("hot");
        }else{
            printf("cold");

    }
return 0;
}
int main(){
    int n;
printf("enter temperature:");
scanf("%d",&n);
temp(n);
return 0;
}

