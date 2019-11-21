// pointers ara variables which stores the address of other variable,Array
// pointers can store address of int,float,char 

#include<stdio.h>
#include<conio.h>
int main(){
    // int a = 56;
    // int* ptr = &a;
    // printf("value of a:%d\n",a);
    // printf("address of a:%d\n",&a);
    // printf("value of a from pointeer:%d\n",*ptr);
    // printf("address of a from pointer:%d\n",ptr);
    // ptr++;
    // printf("address of a from pointer after increment:%d\n",ptr);
    int arr[100];
    arr[0] = 123;
    arr[1] = 456;
    arr[2] = 23;
    arr[3] = 4654;
    int* ptr = &arr;
    printf("\n%d",ptr);
    printf("\n%d",*ptr);
    ptr++;
    printf("\n%d",ptr);
    printf("\n%d",*ptr);
    return 0;
}