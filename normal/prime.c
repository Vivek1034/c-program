#include<stdio.h>
int primeCheck(int num);
int main(){
    int n=70;
    int isPrime=primeCheck(n);
    if(isPrime){
        printf("the number is prime number");

    }
    else{
        printf("the number is not a prime number");
    }
}
int primeCheck(int num){
    if (num<=0) return 0;
    for(int i=2; i*i<=num;i++){
        if (num%i==0) return 0;

    }
        
    return 1;
    
}