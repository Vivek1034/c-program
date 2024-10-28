#include<stdio.h>
void swapElements(int *a,int *b);
void swapElementsCaller();
int main(){
    swapElementsCaller();
}
void swapElementsCaller(){
    int a=10,b=20;
    swapElements(&a,&b);
    printf("%d %d",a,b);
}
void swapElements(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
