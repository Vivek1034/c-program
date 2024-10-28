#include<stdio.h>
void callgcd();
int gcd(int x,int y);
void callgcd(){
    int a=48,b=18;
    printf("\ngcd calculation:\n");
    printf("input:a=%d ,b=%d ",a,b);

    int result=gcd(a,b);
    printf("gcd of %d and %d is: %d\n ",a,b,result);

}
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}



int main(){
    callgcd();
    
    return 0;
}