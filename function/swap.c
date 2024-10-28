// #include<stdio.h>
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("after swaping:%d,%d",a,b);
// }
// int main(){
//     int a=10,b=19;
//     swap(a, b);
// }


// without using third variable
#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping:%d,%d",a,b);
}
int main(){
    int a=3,b=15;
    swap(a, b);
}