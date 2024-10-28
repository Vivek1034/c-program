#include<stdio.h>

void demonstrateLeft();
int main(){
    demonstrateLeft();
    return 0;
}
    

void demonstrateLeft(){
    int a=5;
    int result = a << 1;
    printf("Left Shift (<<) : %d << 1 = %d\n",a,result);
    int result1 = a >> 1;
    printf("Left Shift (<<) : %d << 1 = %d\n",a,result1);

    

}