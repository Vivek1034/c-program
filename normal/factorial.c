// #include<stdio.h>
// int main(){
//     int fact=1;
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     if(n==0 || n==1){
//         return n;
//     }else{
//         for(int i=2;i<=n;i++){
//             fact*=i;
            
//         }
//     printf("factorial of %d is:%d",n,fact);
//     }
//     return 0;
// }







int main(){
    int fact=1;
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++){
        fact*=i;
        printf("factorial of %d is:%d\n",i,fact);
    }
    
    
    return 0;
}

