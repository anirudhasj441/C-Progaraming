#include<stdio.h>
#include<conio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}
void main(int argc, char const *argv[]){
    int a,b;char op;
    scanf("%d",&a);scanf("%c",&op);scanf("%d",&b);
    switch (op){
        case '+':
            printf("%d",add(a,b));
            break;       
        case '-':
            printf("%d",sub(a,b));
            break;
        case '*':
            printf("%d",mult(a,b));
            break;
        case '/':
            printf("%f",div(a,b));
            break;
    }
    getch();
}