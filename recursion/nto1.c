#include<stdio.h>
void decreasing(int n){
    if(n==0) return;

    printf("%d\n",n);
    decreasing(n-1);

}

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}