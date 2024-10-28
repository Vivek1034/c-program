#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int recAns=a*power(a,b-1);
    return recAns;

    

}

int main(){
    int a;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    int b;
    scanf("%d",&b);
    int p=power(a,b);
    printf("power of base with %d and power %d is %d:",a,b,p);
    return 0;
}