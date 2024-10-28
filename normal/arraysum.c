#include<stdio.h>
int main(){
    int arr[]={10,36,37};
    

    int sum=0;
    for(int i=0;i<=3;i++){
        sum+=arr[i];
    }
    printf("sum of arr: %d",sum);
    return 0;
}