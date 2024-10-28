#include<stdio.h>
void sum(){
    int a=10;
    int b=20;
    int c=a+b;
    printf("%d\n",c);
}

void printline(){
    for (int i = 0; i <4; i++)
    {
        printf("%d\n",i);
    }
    
}
void main(){
printline();
sum();
}