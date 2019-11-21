# include<stdio.h>
# include<conio.h>

int add(int a,int b){
    return a+b;
}

int main()
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("addition = %d", add(a,b));
    getch();
    return 0;
}

