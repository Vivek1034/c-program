#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("ASCII value of %d = %c\n", i,i);

    }
    return 0;

}