#include<stdio.h>
#include<string.h>
void callpalindromecheck();
int ispalindrome(char str[],int left,int right);

void callpalindromecheck(){
    char str[]="roar";
    printf("\npalindrome check:\n");
    printf("input:string=\"%s\"\n",str);
    if (ispalindrome(str,0,strlen(str)-1)){
        printf("\"%s\" is a palindrome.\n",str);
    }
    else{
        printf("\"%s\" is not a palindrome.\n",str);
    }
}
int ispalindrome(char str[],int left,int right){
    
    if (left >= right) {
        return 1;
    }
    // Check if characters at left and right are equal
    if (str[left] != str[right]) {
        return 0;
    }
    // Recursive case: move towards the middle of the string
    return ispalindrome(str, left + 1, right - 1);

}
int main(){
    callpalindromecheck();
    return 0;
}


