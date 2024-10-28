#include<stdio.h>
int square(int a){
    return a*a;
}
int main(){
    int num1 ,result;
    printf("enter  number:");
    scanf("%d",&num1);
    
    result=square(num1);
    printf("the square of %d  is :%d",num1 ,result );
    return 0;
}
