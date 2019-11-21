#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++){
        printf("\n");
        for (j=i+1;j<=n;j++)
        {
            printf("*");
        }
        
    }
    getch();
    return 0;
}
