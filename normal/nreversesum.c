#include<stdio.h>
int main(){
    int n,rem;
    printf("enter a number");
    scanf("%d",&n);
    int rev=0;
    int sum=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    printf("the reverse of number is %d\n",rev);
    sum=sum+rev;
    printf("the sum  is %d",sum);
    return 0;
}