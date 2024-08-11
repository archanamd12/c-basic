#include<stdio.h>
int sum();
void main(){
int a,b;
a=10;
b=20;
sum(a,b);



}
int sum(int a,int b){
printf("%d",a+b);
return 0;
}