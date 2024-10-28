//100,50,25,.....
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    float a=100;
    for (int i=1;i<=n;i++){
        printf(" %.2f ",a);
        a/=2;
    }
    return 0;
}