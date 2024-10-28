#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}