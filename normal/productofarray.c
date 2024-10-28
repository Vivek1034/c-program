#include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4};
//     int arr1[]={6,7,5,8};
//     printf("product of %d and %d is : %d",arr[1]*arr1[2]);
// }


#include <stdio.h>

int main() {
    int n, i,m,j;
    long long product = 1;  // Use long long for large product values
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the array1: ");
    scanf("%d", &m);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    int arr1[m];
    printf("Enter the elements of the array1:\n");
    for (j = 0; j < m; j++) {
        scanf("%d", &arr[i]);
    }
    product = arr[i]*arr1[j];
          
    }
    

    
    

    printf("Product of %d and %d is: %d\n", arr[n],arr1[m],product);
    return 0;
}
