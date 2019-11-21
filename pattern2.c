#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for ( i = 0; i<n; i++){
        printf("\n");
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        
    }
    printf("\n");
    getch();
    return 0;
}