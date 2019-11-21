#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
bool isPalindrome(int num){
    int n,rev,a;
    n = num;
    while(n != 0){
        a = n%10;
        rev = rev*10+a;
        n = (int)n/10;
    }
    if(rev == num){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(isPalindrome(n)){
        printf("%d is palindrome",n);
    }
    else{
        printf("%d is not palindrome",n);
    }
    return 0;
}