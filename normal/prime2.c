#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num){
    if (num<=1) return false;
    for (int i=2;i*i<=num;i++){
        if (num%i==0) return false;
    }
    return true;

}
int main(){
    int N;
    printf("enter the positive integer N:");
    scanf("%d",&N);
    printf("prime number upto %d are:\n",N);
    for(int i=2;i<=N;i++){
        if( isPrime(i)){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}