#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int num1 ,num2,result;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    result=add(num1,num2);
    printf("the sum of %d and %d is :%d",num1 ,num2,result );
    return 0;
}
