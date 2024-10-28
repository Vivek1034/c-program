#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinate");
    scanf("%d %d",&x,&y);
    if( x==0 && y==0){
        printf("the point is on origin");
    }
    else if(x==0){
        printf("lies on y-axis");
    }
    else if(y==0) {
        printf("lies on x-axis");

    }
    else {
        printf("then point does not lies on x and y axis ");
    }
        
    
    
    return 0;
}