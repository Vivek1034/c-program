#include<stdio.h>
int main(){
    int n,rem;
    printf("enter a number");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    printf("the reverse of number is %d",rev);
    return 0;
}