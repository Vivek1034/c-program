#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of %d is:%d",n,sum);
    return 0;
}