#include<stdio.h>
int main(){
    int n,m;
    printf("enter value:");
    scanf("%d",&n);
    printf("enter value:");
    scanf("%d",&m);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            printf(" %d ",i,j);
        }
        printf("\n");
    }
    return 0;
}
